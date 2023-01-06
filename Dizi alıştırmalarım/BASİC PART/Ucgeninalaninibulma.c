#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int alan,taban,yukseklik;
	printf("Ucgenin taban ve yuksekligini girin alanini bulalim!:");
	scanf("%d", &taban);
	scanf("%d", &yukseklik);
	alan= (taban*yukseklik)/2;
	printf("Girmis oldugunuz degerlere gore ucgeninizin alani: %d", alan);
	return 0;
}
