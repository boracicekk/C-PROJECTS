#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi,us,sonuc=1,i=1;
	printf("Uslu islemlerin cevabini bulabileceginiz bu uygulamayi dogru calistirmak icin sayiyi ardindan ussunu giriniz:\n");
	printf("Sayinizi giriniz:");
	scanf("%d", &sayi);
	printf("Ussunuzu giriniz:");
	scanf("%d", &us);
	while (i<=us)
{
	sonuc*=sayi;
	i++;
}
	printf("%d ^ %d isleminizin sonucu= %d" ,sayi, us, sonuc);
	return 0;
}
