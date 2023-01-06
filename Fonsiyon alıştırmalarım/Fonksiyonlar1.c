#include <stdio.h>
#include <stdlib.h>
// Negatif sayi girildiginde hata mesaji veren program.
void hatayibas(int hata){
	printf("Hata kodu %d", hata);
}

int main(int argc, char *argv[]) {
		int sayi;
		printf("Pozitif bir sayi giriniz:");
		scanf("%d", &sayi);
	if (sayi < 0) hatayibas(404);
	else printf("Tebrikler pozitif bir sayi girdiniz!");
	return 0;
}
