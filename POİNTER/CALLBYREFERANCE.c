#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void degerdegistir(int *a,int*b){
	int gecici= *a;
	*a= *b;
	*b=gecici;
	
}
int main() {
	int x;
	int y=1;
	printf("Selam guzeller guzeli. Bana olan sevginin miktarini 1 ile 10 arasinda bir seviye secerek belirtt:\n");
	scanf("%d",&x);
	printf("YAAA ISTE BUNA SEVINDIM ASLANIM KAPLANIM\n Benim sevgimin derecesini de 1 ile 10 arasindaki bir sayi uzerinden ogrenmek ister misin?\n Bir sey demene gerek yok merak ettigini biliyorum!\n");	
	degerdegistir(&x,&y);
	printf("Sana olan sevgimin karsiligi yaklasik olarak %d\n",x);
	printf("Saka saka tabiki:\n");
	printf("%d",y);
	return 0;
}
