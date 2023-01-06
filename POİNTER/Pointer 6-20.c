#include <stdio.h>
#include <stdlib.h>

/* Call by reference kullanarak elemanlarý deðiþ tokuþ (swap) eden bir C program kodu yazýnýz.
 */
int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Call by Reference ile Swap yapacagim 3 elemani giriniz:\n");
	printf("1.elemani giriniz:\n");
	scanf("%d",&a);
	printf("2.elemani giriniz:\n");
	scanf("%d",&b);
	printf("3.elemani giriniz:\n");
	scanf("%d",&c);
	SwapNumbers(&a,&b,&c);
	printf("Swap sonrasi elemanlariniz:\n");
	printf("1.eleman=%d\n 2.eleman=%d\n 3.eleman=%d\n",a,b,c);

	return 0;
}
	void SwapNumbers(int *x,int *y,int *z){
		int temp;
		temp=*y;
		*y=*x;
		*x=*z;
		*z=temp;
	}
