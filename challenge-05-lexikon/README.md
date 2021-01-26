[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 05 - Lexikon

### Aufgabe 

#### Basic Mode
Die letzten Challenges hatten alle was mit Zahlen zu tun. Daher wollen wir uns mal ein bisschen mehr um W�rter 
k�mmern. Da wir ohnehin f�r eine Pr�fung lernen, bietet sich doch ein kleines Nachschlagewerk an.

Schreibe ein Programm, welches folgende Ausgabe erzeugt. 

Erwartete Ausgabe:
![Erwartete Ausgabe Basic Mode](./images/output_basic.png)

Die Themen�bersicht soll dabei dynamisch sein, d.h.
Dein Code sollte die Ausgabe flexibel auf eine Themenanzahl von 0 - 255 gestalten (bei 0 gibt es kein Thema).

Nun soll der Nutzer gefragt werden, welches Thema ihn interessiert. Bei der Eingabe von 0 soll das Programm beendet 
werden. Bei Auswahl einer Zahl soll angezeigt werden "ThemaX wurde gew�hlt". Versuche das Ganze mit einer 
switch-case-Anweisung umzusetzen.

#### Advanced Mode

Das Programm soll in einer Endlosschleife laufen. Jedes mal, wenn ein Themengebiet angezeigt wurde, soll danach 
wieder das Hauptmen� angezeigt werden und der Nutzer kann eine weitere Auswahl treffen.


#### Expert Mode 

Du hast die Headerdatei "[encyclopedia.h](./source/encyclopedia.h)" und die dazugeh�rige CodeDatei "[encyclopedia.c](./source/encyclopedia.c)" erhalten (siehe Ordner [source](./source/)), mit welchen 
sich ein (sehr einfaches) Lexikon verwalten l�sst. Binde beide Dateien in Dein Projekt ein und erg�nze eine 
include-Anweisung auf die neue Headerdatei (Hinweis: Worauf musst Du beim Einbinden einer eigenen Bibliothek achten?). 

Schau Dir die Header-Datei etwas genauer an, diese enth�lt 4 Funktionen, welche Du nutzen kannst. Die Codedatei
w�rde man im Realfall meist gar nicht einsehen k�nnen, diese wird in der Regel als vorkomplilierte Bin�rdatei
mitgegeben. In unserem Fall habe ich sie Quelloffen gelassen, so k�nnt ihr bei Interesse noch mal den Einsatz
einer Struct in Verbindung mit typedef, Arrays und Pr�prozessordirektiven sehen.

Nutze die Funktion zum Hinzuf�gen, um folgende Artikel hinzuzuf�gen
* Ganzzahlige Datentypen
* Weitere Datentypen
* Wichtigste Steuerungszeichen
* Verzweigungen
* Pr�prozessoranweisungen
* Schleifentypen
* Impizite vs Explizite Umwandlung 

Die �bersicht stellt nur die Artikeltitel dar. Selbstverst�ndlich erg�nzt Du diese um eine sinnvolle Beschreibung.


#### Hardcore Mode

Passe Dein �bersichtsmen� so an, dass jeweils die ArtikelId (zwischen 1 - getArticleCount()) und der dazugeh�rige
ArtikelTitel angezeigt werden. Bei der Auswahl des Themas durch den Nutzer soll die dazugeh�rige Beschreibung 
angezeigt werden.

Erg�nze noch mindestens 5 weitere Artikel.




### L�sung

Die L�sung wird jeweils am Folgetag der Ver�ffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)
