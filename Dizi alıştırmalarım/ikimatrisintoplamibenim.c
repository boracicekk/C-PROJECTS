#include <stdio.h>
#include <stdlib.h>
#define SAT 2
#define SUT 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int a[SAT][SUT] = {5, 3, 7, 0, 1, 2};
//int b[SAT][SUT] = {1, 2, 3, 4, 5, 6};
int main() {
	int a[SAT][SUT];
	int b[SAT][SUT];
	int c[SAT][SUT];
	int i=0,j=0;
	
	printf("a matrisinizin degerlerinizi giriniz:\n");
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("a[%d][%d]--> ", i,j);
		    scanf("%d", &a[i][j]);
		}
	}
	
		printf("b matrisinizin degerlerinizi giriniz:\n");
		
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("b[%d][%d]--> ", i,j);
		    scanf("%d", &b[i][j]);
		}
	}
	
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			c[i][j]= a[i][j]+ b[i][j];
		}
	}
	
	puts("Toplam matrisiniz:");
	
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("%d\t\t", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
