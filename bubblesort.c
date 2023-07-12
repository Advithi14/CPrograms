//bubble sort
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[25];
	int i,j,n=25,count;

for(i=0;i<25;i++){
	arr[i]=rand()%100+1;
	count++;
	printf("%d\t",arr[i]);
	if(count%5==0){
		printf("\n");
	}

}
//bubble sorting
	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int t;
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;

}
		}
	}
	printf("array after sorting\n");
	printf("\n");
	count=0;
for(i=0;i<25;i++){
	count++;
	printf("%d\t",arr[i]);
	if(count%5==0){
		printf("\n");
	}
}
}
