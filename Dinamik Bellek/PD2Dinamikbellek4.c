#include <stdio.h>
#include <stdlib.h>
/* �ncelikle sadece ad�n�z i�in gerekli olan minimum bellek alan�n� malloc fonk. ile ay�rt�n�z.
Daha sonra soyadinizi da eklemek icin bu bellek alan�n� realloc fonk ile geni�letiniz.
 */

int main() {
char *ptra;
char a[50]="";
int s=0;
int p=0;
int toplam;
printf("isminizi giriniz:\n");
scanf("%s",&a[50]);
while(a[s]!='/0'){
	s++;
}
ptra = (char*) malloc (s*sizeof(char));
printf("Soyadinizi Giriniz:\n");
scanf("%s",a[s+1]);
while(a[p]!='/0'){
	p++;
}
toplam=s+p;
ptra = (char*) realloc(a,toplam * sizeof(char));
printf("%s",a[50]);

free(ptra);


	return 0;
}
