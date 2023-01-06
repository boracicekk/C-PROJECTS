#include <stdio.h>
#include <stdlib.h>

/* Bir fonksiyonun nasıl pointer döndüğünü gösteren C program kodu yazınız. Konsolda beklenen çıktı:

 Pointer donen fonksiyon yaz :
--------------------------------------------------
 ilk sayiyi giriniz : 45
 ikinci sayiyi giriniz : 96
 Buyuk olan sayi: 96  */

int main(int argc, char *argv[]) {
	int *ptr1;
	int *ptr2;
	printf("1.sayiyi giriniz:\n");
	scanf("%d",&ptr1);
	printf("2.sayiyi giriniz:\n");
	scanf("%d",&ptr2);
	BuyukOlaniBul(&ptr1,&ptr2);
	
	return 0;
}
void BuyukOlaniBul(int *sayi1,int *sayi2){
	if(*sayi1>sayi2){
		printf("%d, %d sayisindan buyuktur.",*sayi1,*sayi2);
	}
	else
	{
		printf("%d, %d sayisindan buyuktur.",*sayi2,*sayi1);
	}
}
