#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/* I creat random numbers to 10 elements,these elements has got 0 to 30 value randomly then I use bubble sort to them: */

int main(int argc, char *argv[]) {
int i,j,temp;
int A[10];
srand(time(NULL)); 
for(i=0;i<10;i++){
		A[i]=rand()%30;
}
printf("Urettigimiz 10 adet random sayilar:\n");
for(i=0;i<10;i++){
	printf("A[%d]=%d",i,A[i]);	
}
for(i=1;i<10;i++){
	for(j=0;j<10;j++){
		if(A[j]>A[j+1]){
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
	}
}
printf("Bubble sort uygulandiktan sonraki hali ise:\n");
for(i=0;i<10;i++){
	printf("A[%d]=%d",i,A[i]);	
}
	return 0;
}
