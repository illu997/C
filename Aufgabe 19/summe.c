#include<stdio.h>

int main (){
	int n, summe = 0, i = 1;
	printf("\nBitte n eingeben: ");
	scanf("%i", &n);

	while (i <= n){
		summe += i;
		i++;
	}
	printf("\nDie Summe der Zahlen von 1 bis %i ist: %i \n", n, summe);
	return 0;
}
