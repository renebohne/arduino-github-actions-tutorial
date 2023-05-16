#include <SimpleTimer.h> // https://github.com/schinken/SimpleTimer.git
#include <Morse.h> // https://github.com/etherkit/MorseArduino

#define SPEED 15

Morse morse(LED_BUILTIN, SPEED);
SimpleTimer timer;

void repeatMe()
{
    morse.update();
}

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
    timer.setInterval(1, repeatMe);

    delay(1000);
    morse.send("DIGITALE DINGE");
}

void loop()
{
    timer.run();
}
