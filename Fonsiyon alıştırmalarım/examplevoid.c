#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int topla(s1,s2){
	return s1+s2;
}
int cikart(s1,s2){
	return s1-s2;
}
int bolme(s1,s2){
	return s1/s2;
}
int carpma(s1,s2){
	return s1*s2;
}
int main(int argc, char *argv[]) {
	int sayi1,sayi2;
	int islem;
	/*char isim[20];
	printf("Adinizi giriniz:\n");
	scanf("%s", &isim);
	isimyaz(isim);
	selam(); */
	printf("Sayi1 giriniz:\n");
	scanf("%d", &sayi1);
	printf("Sayi2 giriniz:\n");
	scanf("%d", &sayi2);
	printf("Islemi girin: (+:1,-:2,/:3,*:4)");
	scanf("%d", &islem);
	
	switch (islem){
		case 1 :
			printf("Sonuc: %d", topla(sayi1,sayi2));
			break;
	    case 2 :
	    	printf("Sonuc: %d", cikart(sayi1,sayi2));
	    	break;
	    case 3 :
	    	if (sayi2==0) 
				printf("0'a bolme hatasi'");
	    	printf("Sonuc: %d", bolme(sayi1,sayi2));
	    	break;
	    case 4 :
	    	printf("Sonuc: %d", carpma(sayi1,sayi2));
	    	break;
	
	    default:
	    printf("Hatali.");
	}	
	return 0;
}

