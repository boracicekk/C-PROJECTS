#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<stdio.h>
#define SIZE 5
int main(void)
{
int i;
double a[SIZE] = { 1.2, 3.4,
5.6, 7.8,
9.0 };
double max = 0.0;
/* Dizideki en büyük elemaný bul*/
for(i = 0; i < SIZE; i++)
if (a[i] > max)
max = a[i];
printf("max = %.2lf", max);
return 0;
}

