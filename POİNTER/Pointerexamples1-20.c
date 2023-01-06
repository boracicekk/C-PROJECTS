#include <stdio.h>
#include <stdlib.h>

/*Pointer'larý (iþaretçileri) kullanarak 2 sayýyý toplayan bir C program kodu yazýnýz. 
Girdi olarak konsoldan iki sayý okuyunuz. */
int main(int argc, char *argv[]) {
	int x,y;
	printf("Pointer ile toplamamizi istediginiz sayilari giriniz:");
	scanf("%d",&x);
	scanf("%d",&y);
	printf("Girdiginiz sayilarin toplami :%d",toplama_islemi(&x,&y));
	
	return 0;
}
int toplama_islemi(int *sayi1,int *sayi2){
	int sum;
	sum = *sayi1+*sayi2;
	return sum;
}
