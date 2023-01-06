#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,N;
	double a[100];
	float toplam=0.0, aritmetikort=0.0, strsp=0.0,M=0.0;
	printf("Dizinizin eleman sayisini giriniz: \n");
	scanf("%d", &N);
	printf ("Dizinizin elemanlarini giriniz: \n");
	for (i=0; i<N; i++)
	{
	scanf("%lf", &a[i]);
	}
	for (i=0;i<N; i++)
	{
	toplam+=a[i];	
	}
	aritmetikort= toplam/N;
	for (i=0; i<N; i++)
	{
		M+=pow((aritmetikort- a[i]),2);
	}
	strsp=pow((M/(N-1)),(1/2));
	
	printf("Dizinizin aritmetik ortalamasi: %.2f\n", aritmetikort);
	printf("Dizinin standart sapmasi : %.2lf", strsp);
	return 0;
}
