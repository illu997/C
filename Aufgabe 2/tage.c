#include <stdio.h>

int main(){

	//Variablen definiert
	int tag, std, min, sek;

	//Eingabe der Anzahl der Tage
	printf("Bitte geben Sie die Anzahl der Tage ein: ");
	scanf("%i", &tag);

	//Die Berechnung der Stunden, Minuten und Sekunden.
	std = tag * 24;
	min = std * 60;
	sek = min * 60;
	
	//Die Ausgabe der berechneten Daten.
	printf("Anzahl Stunden %i. \n", std);
	printf("Anzahl Minuten %i. \n", min);
	printf("Anzahl Sekunden %i. \n", sek);
	return 0;
}