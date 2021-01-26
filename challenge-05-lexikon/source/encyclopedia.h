#ifndef ENCYCLOPEDIA_H
#define ENCYCLOPEDIA_H


// Methode zum Z�hlen, wie viele Artikel sich in der Enzyklop�die befinden
// Gibt einen Integer zwischen 0..255 zur�ck
// Beispielaufruf: int count = getArticleCount();
int getArticleCount();


// F�gt einen neuen Artikel zur Enzyklop�die hinzu. Als Parameter sind zwei 
// String zu �bergeben. Der erste f�r den Titel des Artikels, der zweite f�r
// die Beschreibung. Wenn der Artikel erfolgreich hinzugef�gt wurde, gibt die
// Funktion 1 zur�ck, ansonsten 0
// Beispielaufruf: addArticle("Thema1", "Meine Beschreibung zu Thema1");
int addArticle(char* title, char* description);


// Ruft einen Artikel anhand seiner Id (1..255) auf und schreibt dessen Titel
// direkt in die Konsole, an die aktuelle Stelle des Cursors. Dabei werden 
// keinerlei Steuerungszeichen wie bspw. "\n" �bergeben. Sollte eine �ng�ltige
// articleId �bergeben werden, so wird "---" ausgegeben
// Beispielaufruf: printArticleTitle(5);
void printArticleTitle(int articleId);


// Ruft einen Artikel anhand seiner Id (1..255) auf und schreibt dessen Inhalt
// (also die Beschreibung) direkt in die Konsole, an die aktuelle Stelle des 
// Cursors. Dabei werden keinerlei Steuerungszeichen wie bspw. "\n" �bergeben.
// Sollte eine �ng�ltige articleId �bergeben werden, so wird "---" ausgegeben
// Beispielaufruf: printArticleTitle(5);
void printArticleDescription(int articleId);


#endif /* ENCYCLOPEDIA_H */