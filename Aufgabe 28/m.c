#include <stdio.h>

unsigned int kuerzen(unsigned int, unsigned int);


unsigned int kuerzen(unsigned int a, unsigned int b)
{
	// Wenn a=0 ist, ist b der ggT 
	if (a == 0) 
	{
		return b;
	}
	//Die Schleife läuft so lange bis b nicht 0 ist
	while(b != 0) 
	{
		//wenn a größer als b ist wird a - b gerechnet
		if (a > b)
		{
			a = a - b; 
		}
		// wenn b größer a ist wird b - a gerechnet
		else 
		{
			b = b - a;  
		}
	}
	// der größte gemeinsame Teiler wird zurück gegeben
	return a;  
}
//Struct definieren 
struct bruch{
		unsigned int zaehler;
		unsigned int nenner;
	};

int main(){
	// Struct für den Bruch erstellt
	
	//Variablen deklariert
	unsigned int a, b;
	unsigned int ggteiler;
	//Struct deklarieren
	struct bruch x;

	printf("Programm zum Kürzen von Brüchen\n\n");
	//Die Eingabe des Bruches
	printf("Bitte geben Sie den Bruch ein (Zähler, Nenner): ");
	scanf("%i %i", &a, &b);
	
	// Die Eingabe wird an die Funktion weiter gegeben
	ggteiler = ggt(a, b);

	// Kürzen des Bruches 
	x.zaehler = a / ggteiler ;
	x.nenner = b / ggteiler ;

	// Die Ausgabe der berechneten Werte.
	printf("\n");
	printf("Der größte gemeinsame Teiler ist: %d \n\n", ggteiler);
	printf("Der gekürzte Bruch heißt: %d/%d \n", x.zaehler, x.nenner);

	return 0;
}