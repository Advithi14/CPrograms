#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,number,flag=0,count=0;

int arr[25];
for(i=0;i<25;i++){
	arr[i]=rand()%100+1;
	count++;
	printf("%d\t",arr[i]);
	if(count%5==0){
		printf("\n");
	}

}
printf("enter a number");
scanf("%d",&number);
for(i=0;i<25;i++){
	if(arr[i]==number){
		printf("%d is found\n",number);
		flag=1;
		break;
	}
}
if(flag==0){
	printf("%d is not found\n",number);
}

	}