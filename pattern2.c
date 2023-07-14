#include<stdio.h>
int main()
{
	int i,j,k,s=20;
for(i=1;i<=5;i++){
	printf("\n");
		for(k=1;k<=s;k++)
		printf(" ");
		for(j=1;j<=i;j++)
			printf(" *  ");

		s=s-2;
	}
	s=s+2;
		for(i=4;i>=1;i--){
			printf("\n");
			s=s+2;
			//for spaces
			for(k=1;k<=s;k++)
				printf(" ");
			for(j=1;j<=i;j++)
			printf(" *  ");

		}
		printf("\n");
	}