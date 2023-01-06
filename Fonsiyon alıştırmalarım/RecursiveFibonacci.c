#include <stdio.h>
 
int main() {
	int s;
	int fibonacci=1;
	int gecici=1;
	int x;
	printf("Fibonacci sayi dizisinin ilk kac elemanini gormek istiyorsaniz bu degeri giriniz:");
	scanf("%d",&x);
	for (s=0;s<x;s++){
		fibonacci+=gecici;
	}
 
    return 0;
}
 

