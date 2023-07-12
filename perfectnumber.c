#include<stdio.h>
int main()
{
	int i,n,count=0,sum=0;
	printf("enter a number");
	scanf("%d",&n);

	for(i=1;i<=n;i++){

		if(n%i==0){
			printf("Factor: %d\n", i);
			count++;
			sum=sum+i;
		}
   }
   -
  printf("number of factors is %d\n",count);
  printf("sum of factors is %d\n",sum);

  if(sum==n){
  	printf("%d is a perfect number\n",n);
  }
  	else{
  		printf("%d is not a perfect number\n",n);
  	}
  	}
  

