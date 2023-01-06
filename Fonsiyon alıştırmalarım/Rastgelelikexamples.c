#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomNumbergame(int toplam1){
if(toplam1==7 || toplam1==11){
	printf("%d :Tebrikler oyunu kazandiniz.",toplam1);
}
else if(toplam1==2 || toplam1==3 || toplam1==12){
	printf ("%d :Oyunu kaybettiniz!",toplam1);
}
else if(toplam1==4 || toplam1==5 || toplam1==6 || toplam1==8 || toplam1==9 || toplam1==10){
printf("Puaniniz: %d",toplam1);	
}	
}

int main(int argc, char *argv[]) {
srand(time(NULL));
int toplam;
int zar1;
int zar2;
int x;
printf("Zar oyununa hosgeldiniz:\n");
printf("Oyuna baslamak icin ekrana 1 yaziniz:\n");
scanf("%d", &x);
if(x==1){
	zar1= rand() % 6+1;
	printf("Zari kendiniz attiginizda kac gelsin?:");
	scanf("%d",&zar2);
	printf("ilk zariniz:%d\n ikinci zariniz:%d\n",zar1,zar2);
	toplam=zar1+zar2;
	randomNumbergame(toplam);	
}
	return 0;

}	
