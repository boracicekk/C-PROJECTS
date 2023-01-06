#include <stdio.h>
#include <stdlib.h>

/* Pointer kullanarak iki sayýdan en büyüðünü bulan bir C program kodu yazýnýz. */
int siralama(int *sayi1,int *sayi2){
	if(*sayi1>*sayi2) printf("%d , %d 'den buyuktur.",*sayi1,*sayi2);
	else if (*sayi2>*sayi1) printf("%d , %d'den buyuktur.",*sayi2,*sayi1);
	else printf("Iki sayi birbirine esittir.");
}
int main(int argc, char *argv[]) {
	int ilk,ikinci;
	printf("Buyukluklerini siralayacagim iki sayiyi giriniz:\n");
	printf("Ilk sayiyi giriniz:");
	scanf("%d",&ilk);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&ikinci);
	siralama(&ilk,&ikinci);
	return 0;
}
