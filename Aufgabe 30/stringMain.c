#include <stdio.h>
#include "stringFunctions.h"


int main() {
    //lokale Variablen definiert
    const int i = 10;
    char firm1[i];
    char firm2[i];
    

    //Eingabe und Speicherung im ersten Array
    printf("Geben sie die erste Firma ein \n");
    scanf("%s", firm1);
    //Eingabe und Speicherung im zweiten Array
    printf("Geben sie die zweite Firma ein \n");
    scanf("%s", firm2);

 
   
    //Aufruf der Funktion in der if-Abfrage
    if(equal(firm1, firm2) == 1){
        printf("\nDie Firmen sind gleich\n");
    }
    else {
    //Ausgabe der Arrays
        printf("%s & %s sind Konkurenten.\n",firm1, firm2);

    };

    return 0;
}