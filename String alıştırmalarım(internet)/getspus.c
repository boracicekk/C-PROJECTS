#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[SIZE];
	printf("Dizi elemanlarinizi giriniz:");
	gets(s);
	puts(s);
	return 0;
}
