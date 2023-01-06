#include <stdio.h>
#include <stdlib.h>
int faktoriyelbulma(int sayi){
	int fact=1;
	for(;sayi>0;sayi--){
		fact*=sayi;
	}
	return fact;
}
int main(int argc, char *argv[]) {
	int n;
	printf("Gireceginiz n sayisinin faktoriyelini hesapliyoruz:");
	scanf("%d",&n);
	printf("%d'nin Faktoriyeli= %d",n,faktoriyelbulma(n));

	return 0;
}
