#include <stdio.h>
#include <stdlib.h>
long rec(long n){
    if (n==1){
    	return 1;
	}
	else {
	return n+rec(n-1);
}
}
int main() {
	long int x;
	printf("1'den gireceginiz sayiya kadar olan sayilarin toplamini bulacagiz:");
	scanf("%ld",&x);
	printf("%ld",rec(x));

	return 0;
}
