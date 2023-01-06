#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Sayi girin eger sayi 5'ten kucukse evet degilse hayir yanitini alacaksiniz:");
	scanf("%d", &sayi);
	if (sayi<5) printf("Evet.");
	else printf("Hayýr.");
	return 0;
}
