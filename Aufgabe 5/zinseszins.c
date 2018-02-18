#include <stdio.h>


int main (){
	float einlage, p; 	//Anfangskapital und der Zinssatz
	int jahre; 			//Jahre 
	int n;				//Variable für die Schleife

	//Die Eingaben die berechnet werden sollen
	printf("Bitte geben Sie die Einlage ein: ");
	scanf("%f", &einlage);
	printf("Bitte geben Sie den Zinssatz ein: ");
	scanf("%f", &p);
	printf("Wie lange soll das Geld angelegt werden: ");
	scanf("%i", &jahre);

	//Die Berechnung
	for (n = 0; n < jahre; n++)
	{
		einlage = einlage + (einlage *(p/100));
	}

	//Die Ausgabe von dem Ergebnis der Berechnung
	printf("Nach %i Jahren haben Sie %.2f Euro.\n", n, einlage);

	return 0;
}