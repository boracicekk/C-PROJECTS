#include <stdio.h>
#include <math.h>
#define N 10
int main(){
int i;
float x[N], toplam = 0.0, ort;
/* ortalama hesabý */
for(i=0; i<N; i++){
scanf("%f",&x[i]);
toplam += x[i];
}
ort = toplam/N;
	return 0;
}
