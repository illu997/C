#include <stdio.h>


int main(){
	int jahr, monat;

	// Die Eingabe des Jahres und des Monats für die Switch-Anfrage
	printf("Bitte geben Sie das Jahr 4-stellig ein.\n");
	scanf("%i", &jahr);
	printf("Bitte geben Sie den Monat ein.\n");
	scanf("%i", &monat);

	// Schaltjahr wenn das Jahr durch 4 teilbar ist
	// Kein Schaltjahr wenn das Jahr volles Jahrhundert ist
	// Schaltjahr wenn das volle Jahrhundert durch 400 teilbar ist

	switch (monat) {
		case 1:
			printf("Der Monat Januar des Jahres %i hat 31 Tage.\n", jahr); break;
		case 2:
			if (jahr%4==0 & jahr%100!=0 || jahr%400==0){
				printf("Der Monat Februar des Jahres %i hat 29 Tage.\n", jahr);
			}
			else {
				printf("Der Monat Februar des Jahres %i hat 28 Tage.\n", jahr);
			}
			break;
		case 3: 
			printf("Der Monat März des Jahres %i hat 31 Tage.\n", jahr); break;
		case 4:
			printf("Der Monat April des Jahres %i hat 30 Tage.\n", jahr); break;
		case 5:
			printf("Der Monat Mai des Jahres %i hat 31 Tage.\n", jahr); break;
		case 6:
			printf("Der Monat Juni des Jahres %i hat 30 Tage.\n", jahr); break;
		case 7:
			printf("Der Monat Juli des Jahres %i hat 31 Tage.\n", jahr); break;
		case 8: 
			printf("Der Monat August des Jahres %i hat 31 Tage.\n", jahr); break;
		case 9:
			printf("Der Monat September des Jahres %i hat 30 Tage.\n", jahr); break;
		case 10:
			printf("Der Monat Oktober des Jahres %i hat 31 Tage.\n", jahr); break;
		case 11:
			printf("Der Monat November des Jahres %i hat 30 Tage.\n", jahr); break;
		case 12:
			printf("Der Monat Dezember des Jahres %i hat 31 Tage.\n", jahr); break;
		//Falls keine der Eingaben erfolgreich erfolgt, muss die Eingabe korrigiert werden.
		default: printf("Bitte Eingabe korrigieren.");
	}

	return 0;
}