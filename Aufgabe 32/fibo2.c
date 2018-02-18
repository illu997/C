#include <stdio.h>

/*
 * 
 */


//Funktion der Folge
int folge (int num) {
    //return a ist am ende die Fibonacci Zahl die ausgegeben wird.
    

    if(num == 1 || num == 2){
        return 1;
    }
    /*wir haben am Anfang für a = 0 und für b = 1, da es rekursiv ist, wiederholt sich die folge wieder
      mit dem wert num-1, für a wird b eingesetzt und für b wird a + b eingesetzt und repeat, bis der wert num = 0 hat.
      Sobald der Wert num = 0 erreicht wurde, ist a die gesuchte Fibonacci Zahl.*/ 
    
    return folge(num - 1) + folge (num - 2);

        
    //Beispiel mit 6
    // 6: 0 1
    // 5: 1 1
    // 4: 1 2
    // 3: 2 3
    // 2: 3 5
    // 1: 5 8
    // 0: 8 



}

int main() {
    //variablen deklariert
    int num;
    int fibonacci;
    
    //einlesen der x-ten Fibonacci Zahl.
    printf("Bitte geben sie die x-te Fibonacci Zahl ein: ");
    scanf("%d", &num);
    //variable fibonacci definiert.
    fibonacci = folge (num);
    //Ausgabe der Fibonacci Zahl.
    printf("\n");
    printf("Die %d -te Fibonacci Zahl lautet %d.\n", num, fibonacci);
    return 0;
}
