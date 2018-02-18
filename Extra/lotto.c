#include <stdio.h>
/* Größe des Arrays */
const int SIZE=6;

void sort(int* array, int size);

int main(){
	int lotto[]={15, 8, 44, 33, 20, 48};
	int i;

	printf("Hier das unsortierte Array: \n");

	for(i=0; i< SIZE; i++)
		printf("%i\t",lotto[i]);

	printf("\nUnd hier sortiert: \n");

	sort(lotto, SIZE);

	for(i=0; i< SIZE; i++)
		printf("%i\t",lotto[i]);

	return 0;
}

void sort(int* array, int size)
{
	int a,b,temp;

	for(a=0; a < size-1;a++)
	{
		for(b=a+1; b<size; b++)
		{
			if(array[a]>array[b])
			{
				temp=array[b];
				array[b]=array[a];
				array[a]=temp;
			}
		}
	}
}