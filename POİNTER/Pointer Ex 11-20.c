#include <stdio.h>
#include <stdlib.h>

/* Bir dizideki tüm elemanlarýn toplamýný pointer kullanarak hesaplayan C program kodu yazýnýz.
Konsolda beklenen çýktý:

 Bir arraydeki tum elemanlari topla :
------------------------------------------------
 Eleman sayisini giriniz (maksimum 10 lutfen) : 4
 4 adet sayi giriniz : 
 eleman - 1 : 14
 eleman - 2 : 65
 eleman - 3 : 85
 eleman - 4 : 123
 Tum arrayin toplami : 287 */

int main(int argc, char *argv[]) {
	int size;
	int a[10];
	int *ptr;
	int i;
	int toplam=0;
	printf("Eleman sayisini giriniz(maksimum 10 lutfen):");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",&a[i]);
	}
	ptr=(int*)malloc(size*sizeof(int));
	for(i=0;i<size;i++){
		ptr[i]=a[i];
		toplam+=ptr[i];
	}
	printf("Array'e girdiginiz elemanlarin toplami= %d",toplam);
	free(ptr);
	return 0;
}
