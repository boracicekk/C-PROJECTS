#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Dizideki en buyuk elemani bulma */

int main(int argc, char *argv[]) {
	int i;
	double a[SIZE] = { 1.2, 3.4, 5.6, 7.8, 9.0 };
	double max= 0.0;
	for (i=0; i<SIZE; i++)
	{
		if (a[i]>max) max=a[i];
	}
			printf("Dizinin elemanlari arasindaki en buyuk deger: %2lf\n", max);
	return 0;
}
