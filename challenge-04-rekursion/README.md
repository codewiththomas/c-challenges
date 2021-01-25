[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 04 - Treppensteigen

### Aufgabe 

Heute gibt es mal etwas kniffliges, aber eigentlich doch ganz einfaches :P

#### Basic Mode
Implementiere eine Methode, welche von der main aus aufgerufen werden kann. Diese soll den Namen calculateCombinations haben und als
Parameter die Anzahl der Stufen erbegeben bekommen. R�ckgabewert soll die Anzahl der m�glichen Kombinationen sein.  

Implementiere nun erstmal die R�ckgabewerte f�r eine kleine Anzahl von Stufen.
-> bei 0 Stufen oder einer negativen Zahl soll 0 zur�ckgegegeben werden
-> bei 1 Stufe gibt es nur die M�glichkeit 1 Stufe zu nehmen, also soll 1 zur�ckgegeben werden
-> bei 2 Stufen kann man entweder 2x 1 Stufe nehmen, oder 1x Doppelschritt, es gibt also 2 m�gliche Kombinationen

#### Advanced/Expert/Hardcore Mode
Jetzt fehlt nur noch die Implementierung f�r mehr als 2 Stufen. 

Tipp: Wir haben grunds�tzlich die M�glichkeit 1 Stufe zu nehmen + alle verbleibenden Kombinationen f�r die restlichen Stufen,
oder wir k�nnen 2 Stufen nehmen + alle verbleibenden Kombinationen f�r die dann verbleibenden Stufen

Tipp: Das Zauberwort ist Rekursion

![Erwartete Ausgabe Basic Mode](./images/hint_advanced.png)

### L�sung

Die L�sung wird jeweils am Folgetag der Ver�ffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)
