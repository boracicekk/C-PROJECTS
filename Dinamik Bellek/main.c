#include <stdio.h>
#include <stdlib.h>
int toplam(int sayi, int sayi2){
	if(sayi2==0){
		return sayi;
	}
	 return 1 + toplam(sayi, sayi2 -1);
	}
	
int main(int argc, char *argv[]) {
	int a,b;
	printf("Toplayacagimiz 2 sayiyi giriniz:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d ve %d'nin toplami= %d",a,b, toplam(a,b));
	return 0;
}
