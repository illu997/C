#Third Makefile

all: stringMain.o stringFunctions.o
		gcc -o stringProg stringMain.o stringFunctions.o

stringMain.o: stringMain.c
		gcc -c stringMain.c -I ./

stringFunctions.o: stringFunctions.c
		gcc -c stringFunctions.c -I ./

clean:
		rm -rf *.o
		rm -rf stringProg