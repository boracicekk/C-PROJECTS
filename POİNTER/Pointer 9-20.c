#include <stdio.h>
#include <stdlib.h>

/* Pointer kullanarak bir diziyi (array) sýralayan C program kodu yazýnýz. */

int main(int argc, char *argv[]) {
int i;
int n;
int *ptrs;
printf("Kac eleman gireceksiniz:\n");
scanf("%d",&n);
ptrs=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
	printf("%d. elemaninizi giriniz:\n",i+1);
	scanf("%d",&ptrs[i]);
}
	return 0;
}
