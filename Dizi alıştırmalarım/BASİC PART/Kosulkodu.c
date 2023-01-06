#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Sayi gir:");
	scanf("%d", &sayi);
	if (sayi<5 && sayi>2) 
	printf("Evet.");
	else 
	printf("Hayir.");
	
	return 0;
}
