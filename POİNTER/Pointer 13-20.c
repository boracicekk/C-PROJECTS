#include <stdio.h>
#include <stdlib.h>

/* Bir dizinin elemanlarýný pointer kullanarak ters sýrada yazdýran C program kodu yazýnýz. */

int main(int argc, char *argv[]) {
	int a[10];
	int *ptra;
	int i;
	int size;
	int z=0;
	printf("Ters cevirilmesini istediginiz kac eleman var:\n");
	scanf("%d",&size);
	int	m=size;
	ptra = (int*)malloc(m*sizeof(int));
	printf("Ters sirayla yazilmasini istediginiz sayilari giriniz:\n");
	for(i=0;i<size;i++){
		printf("%d. elemani giriniz:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(size;size>=0;size--){
			ptra[z]=a[size];
			z++;
		}
	for(i=0;i<m;i++){
		printf("Elemanlarinizin ters sirali hali:%d \n",ptra[i]);
}
	free(ptra);
	
	return 0;
}
