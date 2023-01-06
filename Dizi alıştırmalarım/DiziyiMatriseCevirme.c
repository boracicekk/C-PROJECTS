#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dizi[100];
    int a[100][100];
	int i,j,N,x,sat,sut;
	printf("Diziniz kac elemandan olusuyor:");
	scanf("%d", &N);
	for (x=0; x<N;x++)
	{
	printf("Dizinin [%d]. elemanini gir >\n", x+1);	
	scanf("%d",&dizi[x]);
	}
	printf("Diziniz kac satirdan olusuyor:\n");
	scanf("%d", &sat);
	printf("Diziniz kac sutundan olusuyor:\n");
	scanf("%d", &sut);
	if (N%sat==0 && N%sut==0){
		x=0;
		for(i=0;i<sat; i++){
			for(j=0;j<sut; j++)
			{
				a[i][j]=dizi[x];
				x++;
			}
		}
		printf("\n\nMATRIS > \n");
for(i=0; i<sat; i++){
for(j=0; j<sut; j++){
	printf("%3d", a[i][j]);
    printf("\n");
}
}
} 
else
printf("HATA! Dizi Eleman Sayisi Satir veya Sutuna Tam bolunmelidir");

	return 0;	  
	}
	
	
