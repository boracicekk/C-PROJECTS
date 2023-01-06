#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 
#include <string.h>

// alfabedeki sonraki harf ile degistir
// see muratoksuzer.com
int main()
{
    char inputBuffer[1000]; 
    int i=0;
 	printf("\nString giriniz:\n"); 
	
	gets(inputBuffer);
	
	for(i=0; inputBuffer[i]!='\0'; i++) {

		 inputBuffer[i]++;
	
	}
	
	printf("Sifreli metin:\n\n"); 
	
	puts(inputBuffer);

    
    return(0);
}
