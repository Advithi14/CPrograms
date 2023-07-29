#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter  elements");
	scanf("%d",&n);
	int *ptr;
	ptr=(int *)calloc(n,sizeof(int));

	printf("enter elements",n);

	for(int i=0;i<n;i++){
		
		scanf("%d",(ptr+i));
		printf(" %d ",*(ptr+i));
	}
}