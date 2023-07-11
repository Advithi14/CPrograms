#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,count=0;

int arr[30];
for(i=0;i<30;i++){
	arr[i]=rand()%100+1;
	count++;
	printf("%d\t",arr[i]);
	if(count%5==0){
		printf("\n");
	}
}
	int min=arr[0];
	int max=arr[0];

	for(i=0;i<30;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("%d is max\n",max);
	printf("%d is min\n",min);


}
