[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)

## Challenge 02 - FizzBuzz

### Aufgabe 

#### Basic Mode
Hier mal ein Klassiker f�r Programmiereinsteiger. Unser Programm soll die Zahlen 1 bis 100 hochz�hlen. Ist die Zahl durch 3 teilbar, soll "fizz" ausgegeben. 
Bei Teilbarkeit durch 5 soll "buzz" ausgegeben werden. Ist die Zahl sowohl durch 3 als auch durch 15 teilbar sein, wird entsprechend "fizzbuzz" als Ausgabe 
erwartet. In allen anderen F�llen soll die Zahl selbst ausgegeben werden.

Erwartete Ausgabe:
1
2
fizz
4
buzz
fizz
7
8
fizz
10
11
fizz
13
14
fizzbuzz
16
17
...


#### Advanced Mode
Lagere Deine Fizzbuzz-Logik in eine eigene Funktion aus. Diese soll durch in der Schleife, welche sich in der main()-Methode befinden, f�r
jede Zahl aufgerufen werden

void fizzBuzz(int number)
{
	//TODO: your implementation
}


#### Expert Mode 
Schreibe eine Funktion, welche den Rest bei der Division von ganzen Zahlen ermittelt. In dieser darf der Modulo-Operator nicht verwendet werden - 
findest Du einen eigenen Ansatz?

int getRest(int dividend, int divisor)
{
	// TODO: your implementation
}


#### Hardcore Mode
Im Debugmodus soll immer die Zahl und dahinter ggf. die W�rter "fizz", "buzz", "fizzbuzz" ausgegeben werden. Definiere dabei eine Konstante 
DEBUG als Pr�prozessordirektive. Ohne DEBUG-Mode soll die Ausgabe unver�ndert zum Basic-Mode aussehen.

Erwartete Ausgabe im DEBUG-Mode:
1
2
3 fizz
4
5 buzz
6 fizz
7
8
9 fizz
10
11
12 fizz
13
14
15 fizzbuzz
16
17
...


### L�sung

Die L�sung wird jeweils am Folgetag der Ver�ffentlichung der Aufgabe im Ordner solution eingestellt.

[<<Zur�ck zur �bersicht](https://github.com/codewiththomas/c-challenges)
