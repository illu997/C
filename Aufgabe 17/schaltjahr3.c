#include <stdio.h>

int main(){
	int jahr;
	//Eingabe des Jahres
	printf("Geben Sie bitte ein 4-stelliges Jahr an:");
	scanf("%d", &jahr);

	// Schaltjahr wenn das Jahr durch 4 teilbar ist
	// Kein Schaltjahr wenn das Jahr volles Jahrhundert ist
	// Schaltjahr wenn das volle Jahrhundert durch 400 teilbar ist
	if(jahr% 4==0 & jahr%100!=0 || jahr%400==0){
		printf("%d ist ein Schaltjahr!\n", jahr);
	}
	else 
		printf("%d ist kein Schaltjahr!\n", jahr);

	return 0;
}