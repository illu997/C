#include <stdio.h>
#include "arrayFunctions.h"

//Die Main Funktion mit dem Aufruf der Funktionen
//für die Berechnung


//Main Funktion
int main(){
	//lokale Variablen definiert
	const int n = 50;
	int array[n];
	int arrayb[n];
	int opt, i, j;
	int count=0;
	double mittel;
	int groesste;
	
	//For-Schleife für die Eingaben
	for (int i = 0; i<n; ++i){
	printf("Bitte geben Sie Zahlen ein: \n");
	scanf("%d", &array[i]);
	count++;
	//Die Schleife wird verlassen wenn eine 0 eingegeben wird
	if(array[i] == 0){
		break;
		};
	}
	//Der die 0 wird von dem Counter subtrahiert damit man
	//Die genaue Anzahl an eingegebenen Zahlen bekommt
	count = count - 1 ;
	//While-Schleife für die Optionen
	while(opt!=5){
		printf("\n");
		printf("Bitte wählen Sie unten zwischen den Optionen aus.\n\n");

		printf("(1)Den Mittelwert der eingegebenen Zahlen ausgeben.\n");
		printf("(2)Die größte eingegebene Zahl ausgeben.\n");
		printf("(3)Die Zahlen sortieren.\n");
		printf("(4)Die Zahlen mit Absolutbeträgen in umgekehrter Reihenfolge ausgeben.\n");


		printf("Bitte geben Sie eine Option ein:\n\n");
		scanf("%d",&opt);

		//Der Switch-case für die oben eingegebene Zahl bzw Option
		switch(opt){
			case 1:
				//Der Mittelwert der Zahlen wird berechnet und in der 
				//Variable mittel gespeichert
				//als Parameter wird das erste Feld vom Array und der counter
				//per Zeigern an die Funktion übergeben
				mittel = mittelwert(&array[0], &count);
				printf("%.2lf \n",mittel); 
				break;
			case 2:
				//Die größte Zahl wird aus dem Array gesucht und in der
				//Variable groesste gespeichert
				//als Parameter wird wieder das erste Feld vom Array und der Counter
				//per Zeiger an die Funktion übergeben
				groesste = groessteZahl(&array[0], &count);
				printf("Die größte Zahl ist %d \n", groesste); 
				break;
			case 3:
				//Das Array wird in der Funktion sortiert
				//als Parameter wird wieder das erste Feld vom Array und der Counter
				//per Zeiger an die Funktion übergeben
				sortieren(&array[0], &count);
				//For-Schleife für die Ausgebe des sortierten Arrays
				for(i=0; i<count;i++){
					printf("%d \n", array[i]);
				} 
				break;
			case 4:
				//Das Array wird mit den Absolutbeträgen und in umgekehrter Reihenfolge ausgegeben
				//als Parameter wird wieder das erste Feld vom Array, der Counter und
				//das erste Feld von dem leeren Array per Zeiger an die Funktion übergeben
				absolut(&array[0], &arrayb[0], &count);
				for(i=0; i< count; i++)
					printf("%d \n",arrayb[i]); 
				break;
				//Default-Case zum abfangen falscher Eingaben
			default:

				printf("Falsche Eingabe.\n");
		}

	}

		
	
	return 0;
}