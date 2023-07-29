//strng palindrome//
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30];
	printf("enter a string");
	scanf("%s",str1); 
	int i, length;
      
      length = strlen(str1);
      for(i=0;i<length-1;i++)


         if(str1[i]!=length-1) 
           printf("its is a palindrome\n"); 
         else
         	printf("it is not a palindrome\n");
      
      
       
      
   }

	

