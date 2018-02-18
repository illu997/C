#include <stdio.h>


int main (){
	float akm; // End-Km-Stand
	float ekm; // End-Km-Stand
	float gefkm; // Gefahrene Km
	int alter; // Alter
	float gkudp; // Gefahrene Kilometer über der Pauschale
	float ppkm; // Preis pro Kilometer
	float gesbet; // Gesamtbetrag

	printf("Bitte geben Sie ihr Alter an: ");
	scanf("%d", &alter);

	// Das Alter sollte eigelesen und überprüft werden
	// Falls das Alter unter 18 ist, wird das Programm an dieser Stelle beendet.
	if (alter < 18) {
		printf("Sie sind nicht berechtigt zur Vermietung.\n");
		return 0;
	}
	//Falls die Eingabe 18+ ist geht das Programm hier weiter.
	else {

	//Die Eingabe des Anfangs- und End-Km-Standes
	printf("Anfangs-Km-Stand: ");
	scanf("%f", &akm);
	printf("End-Km-Stand: ");
	scanf("%f", &ekm);

	//Die konstante Berechnung der gefahrenen Kilometer und Ausgabe der GefKm und des Preises
	gefkm = ekm - akm;
	printf("Gefahrene Km: %.0f \n",gefkm);
	printf("Grundpreis 73.00 € \n");

	//Die variable Berechnung für das Alter unter 23 Jahre
	//Danach erfolgt die jeweilige Ausgabe
	if (alter < 23){
		printf("Fahrer unter 23 Jahre: 10.00€ Pauschale \n");
		if (gefkm > 250) {
		gkudp=(gefkm - 250);
		ppkm=gkudp * 0.17;
		printf("Gefahrene Km über der Pauschale: %.0f x 0.17 Euro: %.2f \n", gkudp, ppkm);
	}
		gesbet= 73.00 + ppkm + 10.00 ;
		printf("Gesamtbetrag: %0.2f \n", gesbet);
	}

	//Die variable Berechnung für das Alter über 70
	//Danach erfolgt die jeweilige Ausgabe
	 else if (alter > 70){
	 	printf("Fahrer über 70 Jahre: 1000.00 € Pauschale \n");
	 	if (gefkm > 250){
		gkudp=(gefkm - 250);
		ppkm= gkudp * 0.17;
		printf("Gefahrene Km über der Pauschale: %.0f x 0.17 Euro: %.2f \n", gkudp, ppkm);
	}
		gesbet= 73.00 + ppkm + 1000,00;
		printf("Gesamtbetrag: %0.2f \n", gesbet);
	}

	//Die Berechnung für das Alter zwischen 23 und 70
	//Danach erfolgt die jeweilige Ausgabe
	else  {
		if (gefkm > 250) {
		gkudp=(gefkm - 250);
		ppkm= gkudp * 0.17;
		printf("Gefahrene Km über der Pauschale: %.0f x 0.17 Euro: %.2f \n", gkudp, ppkm);
	}
		gesbet= 73.00 + ppkm ;
		printf("Gesamtbetrag: %0.2f \n", gesbet);
	}

	
}


	return 0;

}
