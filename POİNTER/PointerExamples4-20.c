#include <stdio.h>
#include <stdlib.h>

/* Dinamik bellek ay�rma (dynamic memory allocation) y�ntemi ile en b�y�k eleman� bulan bir C program kodu yaz�n�z. */

int main(int argc, char *argv[]) {
	int *ptrkume;
	int x;
	int i;
	int max=0;
	printf("Girdiginiz sayilar arasindaki en buyuk sayiyi bulacagim:\n");
	printf("Kac sayi gireceksiniz?:\n"),
	scanf("%d",&x);
	ptrkume = malloc(x*sizeof(int));
	for(i=0;i<x;i++){
		printf("%d. sayinizi giriniz:\n",i+1);
		scanf("%d",&ptrkume[i]);
	}
	for(i=0;i<x;i++){
		if(ptrkume[i]>max){
			max=ptrkume[i];
		}
	}
	printf("Girdiginiz en buyuk sayi: %d",max);
	
	return 0;
}

