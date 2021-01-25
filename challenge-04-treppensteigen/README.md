﻿[<<Zurück zur Übersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 04 - Treppensteigen

### Aufgabe 

Heute gibt es mal etwas kniffliges, aber eigentlich doch ganz einfaches :P

Du hast eine Treppe mit n Stufen vor Dir. Du kannst jeweils bei einem Schritt 1 Stufe nehmen, oder mit einem Schritt direkt 2 Stufen nehmen. Wie viele mögliche 
Kombinationen gibt es, wie Du die Treppe herauf kommen könntest?

#### Basic Mode
Implementiere eine Methode, welche von der main() aus aufgerufen werden kann. Diese soll den Namen calculateCombinations(...) haben und als
Parameter die Anzahl der Stufen einer Treppe überbegeben bekommen. Rückgabewert soll die Anzahl der möglichen Kombinationen sein.  

Implementiere nun erstmal die Rückgabewerte für eine kleine Anzahl von Stufen.
-> bei 0 Stufen oder einer negativen Zahl soll 0 zurückgegegeben werden
-> bei 1 Stufe gibt es nur die Möglichkeit 1 Stufe zu nehmen, also soll 1 zurückgegeben werden
-> bei 2 Stufen kann man entweder 2x 1 Stufe nehmen, oder 1x Doppelschritt, es gibt also 2 mögliche Kombinationen

#### Advanced/Expert/Hardcore Mode
Jetzt fehlt nur noch die Implementierung für mehr als 2 Stufen. 

Tipp: Wir haben grundsätzlich die Möglichkeit 1 Stufe zu nehmen + alle verbleibenden Kombinationen für die restlichen Stufen,
oder wir können 2 Stufen nehmen + alle verbleibenden Kombinationen für die dann verbleibenden Stufen

Tipp: Das Zauberwort ist Rekursion

Beispiel für 3 Stufen (3 mögliche Kombinationen)
![Beispiel für 3 Stufen (3 mögliche Kombinationen)](./images/hint.png)

### Lösung

Die Lösung wird jeweils am Folgetag der Veröffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zurück zur Übersicht](https://github.com/codewiththomas/c-challenges)
