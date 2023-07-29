#include<stdio.h>
#include<stdlib.h>
int main(){

	int n,i,sum=0;
	printf("enter size");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)malloc(n*sizeof(int));
printf("enter %d elements",n);

	for(int i=0;i<n;i++){
		
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++){
		sum=sum+*(ptr+i);
	}

	printf("\nSum=%d\n",sum);
}