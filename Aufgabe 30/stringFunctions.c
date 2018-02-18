#include <stdio.h>
#include "stringFunctions.h"

int equal(char x[], char y[]){

    int i = 0;
    //Überprüfung der char-arrays auf Gleichheit 
    while(x[i] == y[i]){
    	//Überprüfung des letzten Feldes in den Arrays auf ein Null-Byte
        if( x[i]== '\0' || y[i] == '\0')
        	{ return 1; }
        i++;
    }
    return 0;
}