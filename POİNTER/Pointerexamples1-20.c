#include <stdio.h>
#include <stdlib.h>

/*Pointer'lar� (i�aret�ileri) kullanarak 2 say�y� toplayan bir C program kodu yaz�n�z. 
Girdi olarak konsoldan iki say� okuyunuz. */
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
