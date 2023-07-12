//linear sort
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
//linearsorting
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			int t;
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;

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
