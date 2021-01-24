[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 03 - Zahlenraten

### Aufgabe 

#### Basic Mode
Wir hatten es in der Vorlesung bereits begonnen. Schreibe ein Programm in C, bei welchem ein Nutzer eine zuf�llig generierte Zahl erraten soll.
1. Der Nutzer gibt den Zahlenbereich ein (bspw. 100)
2. Das Programm generiert eine Zufallszahl zwischen 1 <= x <= Zahlenbereich
3. Der Nutzer hat unendlich viele Versuche
4. Der Nutzer wird bei jedem Versuch aufgefordert eine Zahl einzugeben
   -> liegt die Zahl au�erhalb des Zahlenbereichs wird eine Warnung ausgegeben
   -> ist die eingegebene Zahl kleiner als die gesuchte Zahl soll "Leider Falsch. Meine Zahl ist gr��er" ausgegeben werden
   -> ist die eingegebene Zahl gr��er als die gesuchte Zahl soll "Leider Falsch. Meine Zahl ist kleiner" ausgegeben werden
   -> ist die Zahl genau die richtige soll "Super, Du hast es erraten!" ausgegeben werden

Hilfsfunktion zur Erzeugung einer Zufallszahl (ben�tigt stdlib.h und time.h):

    int randomNumber(int maxNumber)
    {
	    srand(time(NULL));
	    return rand() % maxNumber + 1;
    }

#### Advanced Mode
Es soll die Anzahl der Versuche gewertet werden
Bei der Aufforderung zum Raten soll "n. Versuch - bitte Raten: " ausgegeben werden, wobei n den aktuellen Versuch repr�sentiert


#### Expert Mode 
Nutzer machen gern falsche Eingaben. Das wollen wir unterbinden bzw. abfangen, indem wir eine eigene Funktion f�r
das Einlesen eines Integers entwerfen. Diese soll beim Abfragen des Zahlenbereichs und auch beim Raten zum Einsatz 
kommen. Folgende F�lle sollen abgefangen werden
- es wird eine Zahl kleiner 1 eingegeben (=> Parameter minNumber)
- es wird eine Zahl gr��er als der festgelegte Zahlenbereich eingegeben (=> Parameter maxNumber)
- es wird etwas anderes als eine ganze Zahl eingeben
Eine Fehleingabe soll unser Programm �brigens nicht als Fehlversuch werten!

    int scanInt(int minNumber, int maxNumber)
    {
        TODO: Implementierung hier
    }

Hinweis: Bei der Abfrage des Zahlenbereichs soll als obere Grenze der Maximalwert des int-Datentyps m�glich sein.



#### Hardcore Mode
OK, Zeit unser Programm etwas schwieriger zu gestalten. Der Nutzer soll nur eine maximale Anzahl an Versuchen zur Verf�gung haben.
Dazu soll eine Methode anhand des Zahlenbereichs berechnen, wie viele Versuche maximal zur Verf�gung stehen.

Die Zahl soll nach der Formel "Zahlenbereich <= 2^Versuche" ermittelt werden, wobei der Wert f�r Versuche immer abgerundet werden soll.

    int getMaxTries(int maxNumber)
    {
        //TODO: Implementierung hier
    }

Tipp: F�r die Umsetzung kannst Du die Funktion [log10()](https://www.tutorialspoint.com/c_standard_library/c_function_log10.htm) aus der Bibliothek math.h verwenden.
Diese gibt einen double-Wert zur�ck, welcher explizit in einen Integer konvertiert werden muss.




### L�sung

Die L�sung wird jeweils am Folgetag der Ver�ffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)
