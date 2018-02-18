#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main() {
    float zahl;
    
    printf("Die Floor funktion in C. \n\n");
    printf("Bitte geben sie eine Zahl ein:");
    scanf("%f",&zahl);
    /*floor(x) zeigt die nächst kleinere oder gleich große ganze Zahl der eingegebenen Zahl an.
     also von 5.5 wäre es z.B. die ganze Zahl 5. Von einer Negativen Zahl, wie z.B -3.14 ist die
     nächst kleinere Zahl -4. 
     */
    printf("Der Floorwert der Zahl %f beträgt %f", zahl, floor(zahl));
    
    return 0;
}