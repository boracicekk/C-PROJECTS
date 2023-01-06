#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Bir dizinin elemanlarýný pointer kullanarak ters sýrada yazdýran C program kodu yazýnýz. */

/*int main(int argc, char *argv[]) {
	char a[50];
	char *ptrs;
	int i=0;
	int sayac=0;
	int z=0;
	printf("Katarinizin elemanlarini giriniz:");
	gets(a);
	while(a[i]!='\0'){
		sayac++;
		i++;
	}
	ptrs=(char*)malloc(sayac*sizeof(char));
	for(i;i>=0;i--){
		for(z=0;z<=sayac;z++){
			a[i]=ptrs[z];
		}
	}
	for(i=0;i<=sayac;i++){
		printf("Katarinizin Tersi: %s",ptrs[i]);
	}
	free(ptrs);
	return 0;
}*/
int main(){
	char a[50];
	char *ptrs;
	int i=0;
	int sayac=0;
	int m;
	printf("Katarinizin elemanlarini giriniz:");
	gets(a);
	while(a[i]!='\0'){
		sayac++;
		i++;
	}
	m=sayac+1;
	ptrs=(char*)malloc((m)*sizeof(char));
	strcpy(ptrs,a);
	for(m;m>=0;m--){
		printf("Katarinizin tersi: %c\n",ptrs[m]);
	}
	free(ptrs);
	return 0;
}
