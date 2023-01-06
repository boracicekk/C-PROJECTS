#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[SIZE],sesli_harfler[10]={'a','A','E','e','I','i','o','O','u','U'} ;
	int m, sesliharfsayisi=0,j;
	printf("Elemanlarinizi girin girdiginiz degerler arasinda kac sesli harf var sayalim:");
	gets(s);
	for (m=0; s[m]!='\0'; m++)
	{
		for(j=0; sesli_harfler[j]!='\0';j++)
		{
			if (s[m]==sesli_harfler[j])
			{
				sesliharfsayisi++;
			}
		}
		
	}
	printf("Katarinizin icinde toplam %d tane sesli eleman bulunmakta.", sesliharfsayisi);
	return 0;
}
