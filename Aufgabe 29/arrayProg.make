#Second Makefile

all: arrayMain.o arrayFunctions.o
		gcc -o arrayProg arrayMain.o arrayFunctions.o

arrayMain.o: arrayMain.c
		gcc -c arrayMain.c -I ./

arrayFunctions.o: arrayFunctions.c
		gcc -c arrayFunctions.c -I ./

clean: 
		rm -rf *.o
		rm -rf arrayProg