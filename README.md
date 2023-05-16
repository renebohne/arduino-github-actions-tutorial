# arduino-github-actions-tutorial
Dieses Repo demonstriert, wie man Github Actions nutzen kann, um Arduino Sketches zu kompilieren. 

Dieser Code gehört zu folgendem Live-Stream: 

https://www.youtube.com/watch?v=PDEqwAHVVzw


Der eigentliche Sketch nutzt zwei externe Libraries, um die Nachricht "Digitale Dinge" per Morse-Code auf der LED des Arduino UNO anzuzeigen.

Es geht aber um die Datei main.yml im Ordner .github/workflows. Darin ist der Workflow für Github Actions beschrieben, welcher arduino-cli nutzt, um das Sketch automatisch zu kompilieren und bei Erfolg ein neues Release zu veröffentlichen.

