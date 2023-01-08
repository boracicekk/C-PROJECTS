#include <stdio.h>
#include <stdlib.h>
#define array_size 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int length(char A[]){
	int i;
	int count=0;
	for(i=0;A[i]!='\0';i++){
		count++;
	}
	return count;
}
char Reverse(char A[],int count){
	count--;
	int i=0;
	char temp;
	while(i<count){
		temp=A[i];
		A[i]=A[count];
		A[count]=temp;
		i++;
		count--;
	}
	return temp;
}
int polindrome(char A1[],char A[]){
	if(A1==A){
		return 1;
	}
	else{
		return 0;
	}
	
}
void copy(char A[],char A2[]){
	int i;
	for(i=0;A[i]!='\0';i++){
		A2[i]=A[i];
	}
}
int compare(char A[],char A3[]){
	int i;
	for(i=0;A[i]!=0;i++){
		if(A[i]!=A3[i]){
			return 0;
		}
		else{
			return 1;
		}
	}
}
void concat(char A[],char A3[],int count){
	int i=0;
	count--;
	for(i=0;A3[i]!='\0';i++){
	A[count]=A3[i];
	count++;	
	}
}
void search(char A[],char c){
	int i;
	int count=0;
	for(i=0;A[i]!='\0';i++){
		if(A[i]==c){
			printf("Aradýðýnýz char %d. sýradadýr.\n",count);
			break;
		}
		else{
			printf("Aradiginiz char stringin icinde bulunmamaktadir!\n");
			break;
		}
		count++;
	}
}
void counter(char A[]){
int words = 0, characters = 0, spchar = 0, i;
   for (i = 0; A[i] != '\0'; i++) {
      if (isalnum(A[i]) && (i == 0 || !isalnum(A[i - 1])))
         words++;
      characters++;
      if (!isalnum(A[i]) && !isspace(A[i]))
         spchar++;
   }
   printf("\nNo of characters = %d", characters);
   printf("\nNo of special characters = %d", spchar);
   printf("\nNo of words = %d", words);
}
int main(int argc, char *argv[]) {
	char A[array_size];
	//har A2[array_size];
	//char A3[array_size];
	//char c;
	printf("Enter your string:\n");
	gets(A);
	//printf("Enter your the second string:\n");
	//gets(A3);
	//length(A);
	//printf("%d\n",length(A));
	//Reverse(A,length(A));
	//printf("%s\n",A);
	//polindrome(Reverse(A,length(A)),A);
	//printf("%d\n",polindrome(Reverse(A,length(A)),A));
	//copy(A,A2);
	//printf("%s",A2);
	//compare(A,A3);
	//printf("%d",compare(A,A3));
	//concat(A,A3,length(A));
	//printf("%s",A3);
	//printf("Enter which character you want to find in your String:\n");
	//scanf("%c",&c);
	//search(A,c);
	counter(A);
	return 0;
}
