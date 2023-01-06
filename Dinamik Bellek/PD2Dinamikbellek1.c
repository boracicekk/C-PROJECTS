#include <stdio.h>
#include <stdlib.h>
/*
Pointer kullanarak bir dizi tanýmlayýnýz. 
Dizinin boyutunu kullanýcýya girdirtiniz.
Dizinin elemanlarini kullanicidan aliniz.
Daha sonra dizide yeni bir alan oluþturun ve 
yeni elemanlari kullanicidan aliniz en son yeni dizinin elemanlarini ekrana yansitiniz.
*/
int main(int argc, char *argv[]) {
	int a[40];
	int*ptr;
	int s=0;
	int boyut;
	int yeniboyut;
	int ekleme;
	printf("Dizinizin boyutunu giriniz:");
	scanf("%d",&boyut);
	ptr = malloc(boyut*sizeof(int));
	for(s=0;s<boyut;s++){
		printf("Dizinin %d. elemanini giriniz:",s+1);
		scanf("%d",&a[s]);
	}
	printf("Diziye kac eleman daha eklemek istiyorsunuz?:\n");
	scanf("%d",&ekleme);
	yeniboyut=boyut+ekleme;
	realloc(ptr,yeniboyut*sizeof(int));
	printf("Dizinin yeni elemanlarini sirasiyla ekleyiniz:\n");
	for(boyut;boyut<yeniboyut;boyut++){
		scanf("%d",&a[boyut]);
	}
	for(s=0;s<yeniboyut;s++){
		printf("Dizinizin %d. elemani = %d\n",s+1,a[s]);

	}
	free(a);
	return 0;
}
