#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[SIZE];
	int k,i;
	printf("Katarinizin uyelerini giriniz:");
	gets(s);
	for(i=0;s[i]!='\0'; i++)
	{
		k++;
	}
	printf("Katarinizin eleman sayisi: %d", k);
	return 0;
}
