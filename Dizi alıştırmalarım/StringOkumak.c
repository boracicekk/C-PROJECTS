#include <stdio.h>
#include <stdlib.h>
#define  SIZE 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Gets bosluklar dahil alýr. ----- scanf bosluklarda durur.*/
int main(int argc, char *argv[]) {
	char str2[SIZE];
	int i=0, k=0;
	printf("Dizinizin elemanlari olacak sayilari giriniz biz hem okuyalim hem toplamda kac karakter oldugunu size iletelim:\n");
gets (str2);
for (i=0; str2[i]!='\0'; i++){
	k++;
}
printf("Elemanlarinizi katarimiza isledik. Katariniz toplam %d kadar karakter icermektedir.", k);

	return 0;
}
