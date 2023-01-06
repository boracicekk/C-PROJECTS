#include <stdio.h>
#include <stdlib.h>
long fact(long n){
	if (n==1 || n==0){
		return 1;
	}
	else {
		return n*fact(n-1);
	}
}

int main() {
	long int x;
	printf("Faktoriyelini ogrenmek istediginiz sayiyi giriniz:\n");
	scanf("%ld", &x);
	printf("%ld",fact(x));
	
	return 0;
}
