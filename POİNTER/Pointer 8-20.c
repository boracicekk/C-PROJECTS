#include <stdio.h>
#include <stdlib.h>

/* Verilen bir stringdeki ünlü ve ünsüz harfleri pointer kullanarak sayan C program kodu yazýnýz. */
int main(int argc, char *argv[]) {
	char string[50];
	char *ptrs;
	int countersesli=0;
	int countersessiz=0;
	printf("Katarinizin elemanlarini giriniz:\n");
	gets(string);
	ptrs=string;	
	while(*ptrs!='\0'){
		if(*ptrs=='A' ||*ptrs=='E' ||*ptrs=='I' ||*ptrs=='O' ||*ptrs=='U' ||*ptrs=='a' ||*ptrs=='e' ||*ptrs=='i' ||*ptrs=='o' ||*ptrs=='u'){
			countersesli++;
		}
		else{
			countersessiz++;
			ptrs++;
		}
	}
	printf("Sesli harf sayiniz:%d\n",countersesli);
	printf("Sessiz harf sayiniz:%d",countersessiz);
	return 0;
} 
