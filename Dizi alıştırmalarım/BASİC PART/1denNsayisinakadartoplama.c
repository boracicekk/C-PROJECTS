#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Problem: 1+2+3+4+…+N iþlemini hesapla*/
	int i=1,sayi,toplam=0;
    printf("1'den girdiginiz sayiya kadar olan ardisik dogal sayilari toplayan programi calistirmak icin sayinizi giriniz:");
	scanf("%d", &sayi);
	while (i<=sayi)
	{
     toplam+=i;
	 i++;	
	}	
	printf("1'den girdiginiz sayiya kadar olan ardisik dogal sayilarin toplami= %d", toplam);
	return 0;
}
