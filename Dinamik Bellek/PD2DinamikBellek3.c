#include <stdio.h>
#include <stdlib.h>

/* Toplam eleman sayýsýný kullanýcýdan alarak bu sayý kadar bellekten calloc fonksiyonu kullanarak gerekli yeri alýnýz.
Ayýrdýðýnýz bu bellek alanýna eleman sayýsý kadar deðeri kullanýcýdan alýnýz. 
Daha sonra girilen en büyük deðeri tanýmladýðýnýz iþaretçi deðiþkeni kullanarak bulunuz. ve ekrana yazdýrnýz.
 */

int main(int argc, char *argv[]) {
int *ptr;
int x;
int s;
int maks=0;
printf("Toplam eleman sayinizi giriniz:");
scanf("%d",&x);
ptr = calloc (x,sizeof(int));
for(s=0;s<x;s++){
	printf("Toplam %d kadar eleman giriniz:",x);
	for(s=0;s<x;s++){
		scanf("%d",&ptr[s]);
		if(ptr[s]>=maks){
			maks=ptr[s];
		}
	}
}
printf("Girdiginiz elemanlar arasindaki en buyuk sayi: %d",maks);


	return 0;
}
