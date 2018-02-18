#include <stdio.h>

int main(){
	//Die Variablen für die Berechnung
	int i; //Variable für die Schleifen
	const int n = 5; //Die Konstante für das Array
	int wuerfel[n]; //Das Array mit der Größe 5
	int count;		//Der erste Counter
	int secondCount;//Der zweite Counter
	int currentCount;//Der aktuelle Counter
	int currentNumber; //Erster Wurf
	int a,b,temp,step; //Variable für die Schleifen
	int seqcount = 0;	//Counter für die Sequenz

	printf("\nWürfelspiel.\n\n");
	//Die For Schleife für die Eingabe
	//Diese erfolgt für 5 Würfel
    for (i=0;i <n;i++)
     {

   
     printf("Würfel %i: ",i+1);
     scanf("%i",&wuerfel[i]);
     		//Falls eine falsche Eingabe erfolgt dann wird das Programm beendet
         	if(wuerfel[i]>6 || wuerfel[i]<1){
     		printf("Falsche Eingabe!\n");
     		return 0;
     	}
     }
     

     //Sortierfunktion für das Array
     //Das erste Feld wird mit dem zweitem verglichen und ggf die Plätze getauscht
     //Dies geht dann 5*5=25 mal
     for(step=0;step<n-1;++step)
     	for(i=0;i<n-step-1;++i){
     		if (wuerfel[i]>wuerfel[i+1])
     		{
     			temp=wuerfel[i];
     			wuerfel[i]=wuerfel[i+1];
     			wuerfel[i+1]=temp;

     		}
     	}

     // Nachdem das Array sortiert wurde wird gezählt wie oft eine Zahl im Array vorkommt

	for (i=0; i<5; i++){
		//Die Würfe werden mit dem Array verglichen und dann gezählt
     	if(currentNumber == wuerfel[i]){
     		currentCount++;
     	}
     	else{
     		currentCount = 1;
     		currentNumber=wuerfel[i];
		}
		//Wenn der aktuelle Counter größer als der erste Counter ist dann
		//wird der erste Counter dem aktuellem counter gleich gestellt
		if (currentCount > count){
			count = currentCount;
		}
		//Wenn der aktuelle Counter gleich dem ersten Counter ist wird der Wert an den zweiten Counter gegeben
		//Die Schleife läuft dann 5 mal um die Counter zu zählen
		else if (currentCount > secondCount){
			secondCount = currentCount;
		}
	}

	//Eine For-Schleife für die Sequenz und den Counter
	//Wenn der Wert im 0 Array +1 == dem Wert aus dem 1 Array ist dann geht der Counter hoch
	//Dies funktioniert nur wenn das Array sortiert ist.
	for(i=0;i<5;i++){
		if(wuerfel[i]+1 == wuerfel[i+1]){
			seqcount++;
		}
		
}
	//Hier erfolgt die Abfrage der Counter und die jeweiligen Gewinne
	if(count == 5 && secondCount == 0){
		printf("Gewonnen, Grand!\n");
	}
	else if(count == 4 && secondCount == 1){
		printf("Gewonnen, Poker!\n");
	}
	else if(count == 3 && secondCount == 2){
		printf("Gewonnen, Full House!\n");
	}
	

	else if (seqcount == 4){
		printf("Gewonnen, Sequenz!\n");
	}

	else {
		printf("Nichts Gewonnen! :(\n");
	}

	return 0;
}

