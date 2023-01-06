#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
char a[40];
char *ptr;
int s=0;
printf("isminizi ve soyisminizi giriniz:");
gets(a);
while(a[s]!='/0'){
	s++;
}
ptr = (char*) malloc(s*sizeof(char));
strcpy(ptr,a);
printf("Kopyalanan Ad ve Soyadiniz: %s",ptr);
free(ptr);
	return 0;
}

