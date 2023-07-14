#include<stdio.h>
int factorial(int);
int main(){
int i,j,k,s=20;
for(i=1;i<=10;i++){
	printf("\n");
		for(k=1;k<=s;k++)
		printf(" ");
		for(j=1;j<=i;j++)
	
			printf("%d\t",factorial(i)/factorial(j)*factorial(i-j));
		
		s=s-2;
	}
		printf("\n");
	}

int factorial(int n)
{
	int fact=1;
	int i;
	for(i=1;i<=n;i++)
		fact=fact*i;
	return fact ;
	
}