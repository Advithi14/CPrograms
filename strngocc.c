#include<stdio.h>
#include<string.h>
int main(){
	int count=0,i;
	char str[30]="This is Advithi",ch;

	printf("enter a character");
	scanf("%c",&ch);
	for(i=0;i<strlen(str);i++){
		if(str[i]==ch){
			count++;
		}


	}
	printf("the no of occured %c is %d\n",ch,count);











}