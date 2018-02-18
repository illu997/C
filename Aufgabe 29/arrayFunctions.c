#include <stdio.h>
#include "arrayFunctions.h"

//Diese Funktion gibt den Mittelwert der eingegebenen Zahlen aus
double mittelwert(int *feld, int *groesse){
	//lokale Variablen definiert
	int n = *groesse;
	int i;
	float sum = 0;
	float mit;
	printf("Mittelwert berechnen\n");
	//Die Elemente im Array werden aufsummiert
	for(i=0; i<n; i++){
		sum += feld[i];
	};
	//Der Mittelwert wird berechnet indem man die Summe der Zahlen
	//durch die Anzahl der Elemente im Array teilt
	mit = sum / n;

	return mit;

		
}
//Diese Funktion gibt die größte Zahl aus
int groessteZahl(int *feld, int *groesse){
	printf("Die größte Zahl ausgeben.\n");
	//lokale Variablen definiert
	int n = *groesse;
	int g = feld[0];
	for (int i = 0; i < n; i++){
		if(g < feld[i]) g = feld[i];
	}

	return g;
}

//Diese Funktion sortiert die Elemente im Array
void sortieren(int *feld, int *groesse){
	printf("Die Zahlen sortieren.\n");
	int step, i, temp;
	int n = *groesse;

	//Der Bubble-Sort-Algorithmus

	for(step=0;step<n-1;++step){
     	for(i=0;i<n-step-1;i++){
     		if (feld[i]>feld[i+1]){
     			temp=feld[i];
     			feld[i]=feld[i+1];
     			feld[i+1]=temp;
			}
     	}
    }	
}

//Diese Funktion gibt die Elemente des Arrays in umgekehrter Reihenfolge aus
//und mit ihren Absolutbeträgen
void absolut(int *feld, int *feld2, int *groesse){
	printf("Absolutbeträge umgekehrt ausgeben.\n");
	int i,j;
	int n = *groesse;
	//Die Elemente von dem Array werden in ihre Absolutbeträge gesetzt
	for(i=0; i<n;i++){
		if(feld[i]<0){
			feld[i]=feld[i]*(-1);
		}
	}

	//Hier wird das Array in Umgekehrt in ein neues Array gespeichert
	for(i = n - 1, j = 0; i >= 0; i--, j++){
		feld2[j]=feld[i];
	}


}