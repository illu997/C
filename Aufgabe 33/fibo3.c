#include <stdio.h>

int main(){
	int i;
	int zahl;
	long int array[100];

	printf("Bitte geben Sie eine Zahl ein: ");
	scanf("%d", &zahl);

	//Die ersten Felder werden mit 0 und 1 initialisiert
	array[0]=0;
	array[1]=1;

	//Die for-schleife fängt bei 2 an und geht läuft bis zur angegebenen Zahl
	//Bei dieser iterativen Lösung, werden Ergebnisse zwischengespeichert
	//sodass die Fibonacci Folge für größere Zahlen berechnet werden kann
	for(i=2; i<=zahl;i++){
		array[i] = array[i-1] + array[i-2];

	}
	//Die Ausgabe der n-ten Fibonacci Zahl    
	printf("Die %d -te Fibonacci Zahl ist %ld \n", zahl, array[zahl]);



	return 0;
}