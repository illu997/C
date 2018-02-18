#include <stdio.h>


int main() {

    float zahl1;
    float zahl2;
    printf("geben sie eine Zahl ein:\n");
    scanf("%f",&zahl1);
    printf("geben sie eine weitere Zahl ein:\n");
    scanf("%f",&zahl2);
    
    printf("Der mittelwert beträgt %.2f",(zahl1 + zahl2) / 2);

    return 0;
}