#include <stdio.h>


int main() {

    int zahl1;
    int zahl2;
    printf("geben sie eine Zahl ein:");
    scanf("%i",&zahl1);
    printf("geben sie eine weitere Zahl ein:");
    scanf("%i",&zahl2);
    
    printf("Der mittelwert beträgt %.2f",((float)zahl1 + (float)zahl2) / 2);

    //wenn man kein Typecasting benutzt werden die Nachkommastellen bei ungeraden Zahlen nicht angezeigt.
    //deswegen muss man um ein genaueres Ergebnis zu erhalten ein Typecasting auf float einetzen.

    return 0;
}