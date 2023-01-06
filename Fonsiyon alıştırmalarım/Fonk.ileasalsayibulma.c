#include <stdio.h>
#include <stdlib.h>

int asal_mi(int sayi){
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			return printf("Girdiginiz sayi asal degildir!");
		}
		else {
			return printf("Girdiginiz sayi asaldir.");
		}
	}

}

int main(int argc, char *argv[]) {
	int n;
	printf("Sayi giriniz asal mi degil mi bulalim:");
	scanf("%d",&n);
	asal_mi(n);
	return 0;
}
