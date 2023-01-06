#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int sayi){
	int fact=1;
	for(;sayi>0; sayi--){
		fact*=sayi;
	}
 return fact;
}

int main(int argc, char *argv[]) {
	int n;
	printf("Girdiginiz n sayisinin faktoriyelini bulacagim:");
	scanf("%d", &n);
	printf("Faktoriyel:%d",faktoriyel(n));
	return 0;
}
