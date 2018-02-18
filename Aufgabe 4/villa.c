#include <stdio.h>


int main(){
	float x1, x2, x3, x4; // Die einzelnen Seiten der Villa
	float a, b, c; // Die Variablen für die Zwischenrechnung
	float flaeche, gesflae; 
	float umfang;		
	float preis;		


	printf("Geben Sie die Länge für x1 ein: ");
	scanf("%f", &x1);
	printf("Geben Sie die Länge für x2 ein: ");
	scanf("%f", &x2);

	x3= x1 / 5; //Die Berechnung der restlichen Seiten der Villa
	x4= x2 / 2;
	a = x1 * x4; //Die Blöcke in die die Villa aufgeteil ist
	b = x3 * x4;
	c = b;
	flaeche = a + b + c; //Die Fläche einer Etage
	gesflae = flaeche * 3; // Die Fläche alles Etagen
	umfang = x1 + x1 + x2 + x2 + x4 + x4; // Umfang der Villa für den Rundweg
	preis = umfang * 75; // Der Preis für den Rundweg

	printf("Die Länge x3 beträgt: %.2f \n", x3);
	printf("Die Länge x4 beträgt: %.2f \n", x4);
	printf("Die Fläche einer Etage beträgt: %.2f \n", flaeche);
	printf("Die Gesamtfläche beträgt: %.2f \n", gesflae);
	printf("Der Umfang des Rundwegs beträgt: %.2f \n", umfang);
	printf("Der Preis für den Rundweg beträgt %.2f \n", preis);
	return 0;


}