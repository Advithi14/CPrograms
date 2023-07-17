#include<stdio.h>
#define rows 5
#define cols 5
int main(){

int arr[rows][cols];
int i,j,m,n,sum=0;

printf("Enter size of matrix1");
scanf("%d%d",&m,&n);
printf("Enter %d elements into matrix\n", m*n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&arr[i][j]);
	}
}


//printing matrix1
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf(" %d ",arr[i][j]);
	}
	printf("\n");
}
//precondion for diagonal elements
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
if(i==j){
	sum=sum+arr[i][j];
}
}
}

printf("%d is sum of diagonal elements\n",sum);


}











