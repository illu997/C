#include <stdio.h>

int main (){
	//Variable definiert
	const int n=5;
	int noten[n],i,gesamt = 0;
	//Durchschnitsnote, Summe aller Arbeiten, Durchfallquote, Leute die nicht bestanden haben
	float dnote, summe, dquote, fail;

	//Eingabe mit der For-Schleife 
	for (i=0; i<n; i++)
	{
		printf("Bitte geben Sie die Anzahl der Arbeiten mit der Note %i ein: ", i+1);
		scanf("%i", &noten[i]);
		gesamt+=noten[i];
		summe += (i+1) * noten[i];
		
		
	
	}
	//Berechnungen für die Durchschnitsnote und für die Durchfallquote
	fail= noten[4];
	dnote = summe / gesamt;
	dquote = 100 * fail / gesamt;
	
	//Noten auslesen
	for (i=0; i<n; i++)
	{
		printf("Die Anzahl der Arbeiten mit der Note %i ist: %i \n", i+1, noten[i]);
	}
	printf("Die Gesamtzahl der Arbeiten beträgt: %i \n", gesamt);
	printf("Die Durschschnitsnote ist %.1f \n", dnote);
	printf("Die Durchfallquote ist %.1f%%.\n", dquote);
	return 0;
}