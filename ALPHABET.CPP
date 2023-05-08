#include<stdio.h>
#include<conio.h>
int main(){
char c;
	printf("enter a character:");
	scanf("%c", &c);
	if((c >= 'a' && c <= 'z') ||(c >='a' && c <= 'z')){
		printf("%c is an alphabet.\n",c);
	      }	else if (c >= '0' && c<='9'){
		printf("%C is a digit.\n", c);
	      }	else {
			printf("%c is a special character.\n", c);
	      }



	  }