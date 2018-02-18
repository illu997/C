#include "stdio.h"
#include "stdlib.h"

int main() {
    //variablen deklarieren und definieren
    const int x = 5;
    char matrix[x][x];
    int spalte; 
    int zeile;
    int command;
    
    
    //For-Schleife um die Matrix im Hintergrund mit dem +-Zeichen zu füllen
    for(spalte=0; spalte<x; spalte++) //Spalte wird gefüllt.
    {
        for(zeile=0; zeile<x; zeile++) // Zeile wird gefüllt.
        {
            matrix[spalte][zeile] = '+';
            
        }
    }
       
    
    printf("Das ist die Matrix: \n \n");
   //For-Schleife um die Matrix visuell darzustellen.
    for(spalte=0; spalte<x; spalte++) // For-Schleife für die Spalten.
    {
        for(zeile=0; zeile<x; zeile++) // For-Schleife für die Zeilen.
        {
            printf(" %c ", matrix[spalte][zeile]); // Printf der Matrix mit %c, weil die Matrix oben als char deklariert ist.
                                                   // die Matrix ist als char deklariert damit man sie mit dem + füllen kann (keine Zahl).
        }
        printf("\n"); /*Die new line in der For-Schleife der Spalte, damit nach dem Füllen des Arrays der Zeile, eine eine Zeile
                      angefangen wird und somit der Array der nächsten Zeile gefüllt wird. Außerdem braucht man diese new line damit 
                       jede Zeile untereinander angezeigt wird und nicht nebeneinander.*/
    }
    
    
   //While-Schleife damit alles, was im inneren der Schleife steht, wiederholt wird, solande die Bedingung erfüllt ist.
   //command < 6, damit man die Zahlen 1-5 (jeweils für die 5 Kommandos die das Programm erfüllen muss) angeben kann. 
    while (command < 6) {
    printf("(1) Fülle alle Felder mit 0 \n\n");
    printf("(2) Fülle die beiden Diagonalen mit 0 \n\n");
    printf("(3) Fülle ein spezielles Feld mit 0. Erst Zeile und dann die Spalte \n\n");
    printf("(4) Refresh: Fülle alle Felder wieder mit + \n\n");
    printf("(5) Beende Programm \n\n");
        printf("\n\n");
    printf("Bitte geben sie ein Command ein: "); 
    scanf("%i", &command); //Einlesen des Commands.
        printf("\n");
    //switch-case um cases erstellen zu können, die je nach Eingabe der Zahl für den Command ausgeführt werden.
    switch (command) {
        case 1:
            for(spalte=0; spalte<x; spalte++) 
            {
                for(zeile=0; zeile<x; zeile++)
                {
                    matrix[spalte][zeile] = '0'; //Dasselbe prinzip wie am Anfang. Die Matrix wird diesmal aber mit 0 gefüllt.
                }
            }
            
            printf("Das ist die Matrix jetzt: \n \n");
            
            for(spalte=0; spalte<x; spalte++)
            {
                for(zeile=0; zeile<x; zeile++)
                {
                    printf(" %c", matrix[spalte][zeile]); //Die Matrix wird visuell dargestellt. 
                }
            printf("\n");
            }
            
            break;
        case 2:
            for(spalte=0; spalte<x; spalte++)
            {
                matrix[spalte][spalte] = '0'; //Die Spalte wird von oben links nach unten rechts mit 0 gefüllt. ([0][0],[1][1],... )
                matrix[spalte][x-1-spalte] = '0'; //Die Spalte wird von unten links nach oben rechts mit 0 gefüllt. ([0][4],[1][3],...)
            }
        
         
            for(spalte=0; spalte<x; spalte++) 
            {
                for(zeile=0; zeile<x; zeile++)
                {
                    printf(" %c ", matrix[spalte][zeile]); //Matrix wird visuell dargestellt.
                }
                printf("\n");
            }

            break;
        case 3:
            printf("Bitte geben sie die Zeile an: ");
            scanf("%i",&zeile); //Einscannen der Zeile.
            printf("Bitte geben sie die Spalte an: ");
            scanf("%i",&spalte);//Einscannen der Spalte.
            //if-Verzweigung um das Programm zu stoppen, falls Eingabe der Zeile oder Spalte größer x ist.  
            if (zeile > x || spalte > x){
                printf("Fehler beim Eingeben der Spalte oder Zeile.");
                return 0;
            }
            //else, damit das Programm weiter läuft, falls das if-case nicht erfüllt ist.
            else {
            matrix[zeile-1][spalte-1] = '0'; //Das bestimmte Feld im Array wird mit dem Zeichen 0 gefüllt.
            for(spalte=0; spalte<x; spalte++)
            {
                for(zeile=0; zeile<x; zeile++)
                {
                    printf(" %c", matrix[spalte][zeile]); //Matrix wird visuell dargestellt.
                }
                printf("\n");
            }
            }
        break;
        case 4:
            for(spalte=0; spalte<x; spalte++)
            {
                for(zeile=0; zeile<x; zeile++)
                {
                  
                    matrix[spalte][zeile] = '+'; //Matrix wird mit dem +-Zeichen gefüllt.
                    
                }
            }
            
          
            for(spalte=0; spalte<x; spalte++)
            {
                for(zeile=0; zeile<x; zeile++)
                {
                    printf(" %c ", matrix[spalte][zeile]); //Matrix wird visuell dargestellt.
                }
                printf("\n");
            }
            break;
            
        case 5:
            printf("Programm beendet.\n"); //printf, dass das Programm beendet wird und das Programm wird beendet.
            return 0;break;
        
        default: printf("Fehler bei der Eingabe des Commands."); /*wird eine andere Zahl als 1-5 angegeben, kommt eine Fehlermeldung
                                                                  und das Programm wird beendet.*/ 
        return 0;
            break;
    }
    }
}