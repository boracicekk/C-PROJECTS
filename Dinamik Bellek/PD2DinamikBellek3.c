#include <stdio.h>
#include <stdlib.h>

/* Toplam eleman say�s�n� kullan�c�dan alarak bu say� kadar bellekten calloc fonksiyonu kullanarak gerekli yeri al�n�z.
Ay�rd���n�z bu bellek alan�na eleman say�s� kadar de�eri kullan�c�dan al�n�z. 
Daha sonra girilen en b�y�k de�eri tan�mlad���n�z i�aret�i de�i�keni kullanarak bulunuz. ve ekrana yazd�rn�z.
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
