/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

#include "encyclopedia.h"


int main()
{

    addArticle("Titel", "Beschreibung");
    addArticle("Titel", "Beschreibung");
    addArticle("Titel", "Beschreibung");
    addArticle("Titel", "Beschreibung");
    addArticle("Titel", "Beschreibung");
    addArticle("Titel", "Beschreibung");

    int count = 3;  // unsere maximale Themenzahl
    int i;          // Laufvariable f�r die Schleifen
    int input;      // vom Nutzer gew�hltes Thema

    do
    {
        printf("W�hle ein Themengebiet.\n");
        printf("=======================\n");
        printf("\n");

        for (i = 0; i < count; i++)
        {
            printf("\t%d\tThema%d\n", i + 1, i + 1);
        }

        printf("\n\t0\tBeenden\n");
        printf("Bitte w�hle ein Themengebiet: ");

        scanf("%d", &input);


        switch (input)
        {
            case 0:
                printf("Programm wird beendet...\n");
                break;
            default:
                //Diese if-Anweisung war in der Aufgabe nicht gefordert
                if (input >= 1 && input <= count)
                {
                    printf("Es wurde Thema%d ausgew�hlt\n", input);
                }
                else
                {
                    printf("Ung�ltiges Themengebiert!\n");
                }
            break;
        }
    } while (input != 0);

    return EXIT_SUCCESS;
}


