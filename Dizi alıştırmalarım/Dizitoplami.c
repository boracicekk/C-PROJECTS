#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Dizi toplami */

int main(int argc, char *argv[]) {
	int i,N;
	int a[100], b[100], c[100];
	printf("Dizinin eleman sayisini giriniz:");
	scanf("%d", &N);
	printf ("a dizisi icin elemanlari sirasiyla giriniz: \n");
	for (i=0; i<N; i++)
	{
		scanf("%d", &a[i]);
	}
	printf ("b dizisi icin elemanlari sirasiyla giriniz: \n");
	for (i=0; i<N; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i=0; i<N; i++)
	{
		c[i]=a[i] +b[i];
		printf("C[%d]=%d\n", i, c[i]);
	}
	return 0;
}
