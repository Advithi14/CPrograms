#include<stdio.h>
int main()
{
	int n,d,x,rev=0;
	printf("enter a number");
	scanf("%d",&n);
x = n;
	while(n>0){
		d=n%10;
		rev=rev*10+d;
		n=n/10;

	}
	if(rev==x){
		printf("its a palindrome\n");
	}
	else{
		printf("its not a palindrome\n");
	}
}