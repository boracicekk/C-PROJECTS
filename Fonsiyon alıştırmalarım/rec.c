#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int faktoriyel(s){
 	if (s==1 || s==0)
 		return 1;
	return s*faktoriyel(s-1);
}
int main(int argc, char *argv[]) {
	int sayi;
	printf("Ekrana sayi giriniz:");
	scanf("%d", &sayi);
	printf("Isleminiz: %d",faktoriyel(sayi));
	return 0;
}
