#include <stdio.h>
#include <time.h>

//Deklarierung der Funktionen für den Compiler
int eingabeZulassungsdatum(int , int , int);
int alterBerechnung(int);
void ausgabeAlter(int);
//struct tm *tmnow;	//Ein Struct der time.h Bibliothek

//Funktion für die Eingabe des Zulassungsdatums
int eingabeZulassungsdatum(){
	//Deklaration der eingegebenen Variablen
	int tag, monat, jahr; 
	
	//Eingabe des Zulassungsdatum 
	printf("Bitte geben Sie das Zulassungsdatum ein (tt.mm.jjjj): ");
	scanf("%d.%d.%d", &tag, &monat, &jahr);
	
	//Es wird nur das Jahr zurück gegeben
	//da nur das Jahr für die Berechnung benötigt wird
	return jahr;
}

//Die Funktion für die Ausgabe des heutigen Datums
//und die Berechnung des Alters
int alterBerechnung(int zulassungsJahr){
	//lokale Variablen definiert
	int alter;
	int jheute = 2018; //das aktuelle Jahr
	//time_t tnow;

	//time(&tnow);
	//tmnow = localtime(&tnow);
	//printf("Heute ist der %d.%d.%d \n", tmnow->tm_mday, tmnow->tm_mon + 1, tmnow->tm_year +1900);
	//Die Berechnung des Alters
	//jheute = tmnow -> tm_year + 1900;
	alter = jheute - zulassungsJahr; 
	//Rückgabe des Alters an die main-Funktion
	return alter;

}

//Funktion für die Ausgabe des Alters
void ausgabeAlter(int alter){
	printf("Das Auto ist %d Jahre alt.\n", alter);

}
//Die main Funktion
//Hier werden alle obigen Funktionen aufgerufen
int main() {
	//lokale Variable definiert
	int tag, monat, jahr;
	int zulassungsJahr;
	int alter;
	//Name des Programms
	printf("Zulassungsdatum eines Autos berechnen.\n\n");

	// das eingegebene Jahr wird gespeichert
	zulassungsJahr = eingabeZulassungsdatum(tag,monat,jahr);
	// das eingegebene Jahr wird ausgegeben
	printf("Das Zulassungsjahr ist: %d \n", zulassungsJahr);

	//Das Alter wird berechnet mit Hilfe der Funktion
	//Das Zulassungsjahr wird als Parameter an die Fkt gegeben
	alter= alterBerechnung(zulassungsJahr);

	//das Alter wird an die Funktion weitergegeben
	//die Ausgabe des Alters erfolgt 
	ausgabeAlter(alter);

	return 0;
}

