#include <stdio.h>
#include <stdlib.h>

/* Pointer kullanarak verilen bir say�n�n fakt�riyelini hesaplayan C program kodu yaz�n�z. */

int main(int argc, char *argv[]) {
	int a;
	int*ptra;
	int fakt=1;
	printf("Pointer yardimiyla faktoriyelini hesaplayacagim sayiyi giriniz:\n");
	scanf("%d",&a);
	ptra =&a;
	for(a;a>=1;a--){
		fakt*=*ptra;
	}
	printf("Sayinizin faktoriyeli= %d",fakt);
	return 0;
}
