#include <stdio.h>
#include <stdlib.h>

/* Pointer kullanarak n elemanlý bir array'i dolduran ve elemanlarýný yazdýran bir C program kodu yazýnýz. */

int main() {
	int i;
	int boyut;
	int *ptrarray;
	printf("Diziniz kac elemanli olacak:\n");
	scanf("%d",&boyut);
	ptrarray = malloc(boyut*sizeof(int));
	for(i=0;i<boyut;i++){
		printf("Dizinizin %d . elemanini giriniz:\n",i+1);
		scanf("%d",&ptrarray[i]);
	}
	for(i=0;i<boyut;i++){
	printf("Dizinizin elemanlari sirasiyla : %d\n",ptrarray[i]);	
	}
	
	return 0;
}
