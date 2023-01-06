#include <stdio.h>
#include <stdlib.h>

/* Bubble sort siralama programim. */

int main(int argc, char *argv[]) {
	int A[100];
	int N;
	int i;
	int temp;
	int j;
	printf("Diziniz kac elemanli:");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		printf("Dizinizin %d. elemanini giriniz:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=1;i<N;i++){
		for(j=0;j<N;j++){
		if(A[j]>A[j+1]){
			temp=A[j+1];
			A[j+1]=A[j];
			A[j]=temp;
		}
		}
	}
	printf("Dizinizin elemanlarini siraladigimizda su sekildedir:\n");
	for(i=0;i<N;i++){
		printf("A[%d]=%d\n",A[i],A[i+1]);
	}
	return 0;
}
