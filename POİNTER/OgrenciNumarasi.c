#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=2010213038;
	int ee=0;
	int oo=0;
	int sonbasamak;
	int *even;
	int *odd;
	int s=0;
	int z=0;
	int k=0;
	for(s;s<10;s++){
		if(a%2==0){
			sonbasamak=a%10;
			even=(int*)realloc(even,(ee+1)*sizeof(int));
			even[ee]=&sonbasamak;
			ee++;
			a/=10;
		}
		else {
			sonbasamak=a%10;
			odd=(int*)realloc(odd,(oo+1)*sizeof(int));
			odd[oo]=&sonbasamak;
			oo++;
			a/=10;
		}
	}
	for(z=0;z<ee;z++){
		printf("Ogrenci Numaranizdaki Cift sayilar: %d",even[z]);
	}
	for(k=0;k<oo;k++){
		printf("Ogrenci Numaranizdaki Tek sayilar: %d",odd[k]);
	}
	free(even);
	free(odd);
	
	return 0;
}
