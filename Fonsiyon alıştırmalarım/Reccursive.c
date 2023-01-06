#include <stdio.h>
#include <stdlib.h>
// 1 den farklý sayýlar icin 2n kurallý toplam islemi olustur.
int f(int eleman){
if(eleman<1){
	return 0;
	}
		else{
		return 2*eleman+f(eleman-1);
		
	}	
}
int main() {
	int n;
	printf("a[n] dizisi 2n kuralli bir dizidir. ilk n elemanini belirlemek icin n degerini giriniz:\n");
	scanf("%d",&n);
	printf("Sayilarin sonucu: %d",f(n));
	
	return 0;
}
