#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,count=0,sum1=0,sum2=0;

int arr[40];
for(i=0;i<40;i++){
	arr[i]=rand()%100+1;
	count++;
	printf("%d\t",arr[i]);
	if(count%5==0){
		printf("\n");
	}
}
for(i=0;i<20;i++){
	sum1=sum1+arr[i];

}
for(i=20;i<40;i++){
	sum2=sum2+arr[i];
}
printf("%d is the sum of first half\n",sum1);
printf("%d is the sum of second half\n",sum2);

if(sum1>sum2){
	printf("sum1 is bigger\n");
}
else{
	printf("sum2 is bigger\n");
}




}
