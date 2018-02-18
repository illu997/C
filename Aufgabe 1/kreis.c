#include <stdio.h>


int main(){
	// Die Variablen definiert, die man zur Berechnung braucht.
	float pi;
	float radius;
	float umfang;
	float flaeche;
	float durchm;
	// Die Eingabe von dem Radius.
    printf("Bitte geben Sie den Radius in cm ein: ");
	scanf("%f",&radius);
	// Die Berechnugen für den Umfang, Flaeche, Durchmesser.
	pi = 3.14;
	umfang = 2 * pi * radius;
	flaeche = pi * radius * radius;
	durchm = 2 * radius;
	// Die Ausgabe der berechneten Werte
	printf("Der Radius beträgt %8.2f \n", radius);
	printf("Der Umfang des Kreises beträgt %8.2f \n", umfang);
	printf("Die Fläche des Kreises beträgt %8.2f \n", flaeche);
	printf("Der Durchmesser des Kreises beträgt %8.2f \n", durchm);
	return 0;
}