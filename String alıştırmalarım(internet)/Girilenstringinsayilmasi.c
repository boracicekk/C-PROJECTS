#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[SIZE];
	int i,k=0;
	printf("Dizinizin elemanlarini giriniz ve size kac elemanli oldugunu sayalim:");
	gets(s);
	for(i=0; s[i]!='\0';i++)
	{
		k++;
	}
	printf("Diziniz toplam %d tane eleman iceriyor.", k);
	return 0;
}
