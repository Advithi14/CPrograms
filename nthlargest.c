#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[25];
	int i,j,y,n=25,count,x;
	printf("enter nth largest");
	scanf("%d",&x);
	printf("enter nth smallest");
	scanf("%d",&y);

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
	printf(" nth largest is %d\n",arr[n-x]);
	printf("nth smallest is %d\n",arr[y]);
	
	}

