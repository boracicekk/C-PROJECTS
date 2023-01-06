#include <stdio.h>
int main(){
int a[2][3] = {5, 3, 7, 0, 1, 2};
int b[2][3] = {1, 2, 3, 4, 5, 6};
int c[2][3];
int i, j;
puts("A Matrisi:");
for(i=0; i<2; i++){
    for(j=0; j<3; j++)
    printf("%4d",a[i][j]);
    printf("\n");
}
puts("B Matrisi:");
for(i=0; i<2; i++){
for(j=0; j<3; j++)
printf("%4d",b[i][j]);
printf("\n");
}
puts("\nC Matrisi:");
for(i=0; i<2; i++){
for(j=0; j<3; j++){
c[i][j] = a[i][j] + b[i][j];
printf("%4d",c[i][j]);
}
printf("\n");
}
return 0;
}
