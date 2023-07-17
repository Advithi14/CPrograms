#include<stdio.h>
#define rows 5
#define cols 5
int main(){

int matrix1[rows][cols],matrix2[rows][cols],matrix3[rows][cols];
int i,j,m,n,p,q;

printf("Enter size of matrix1");
scanf("%d%d",&m,&n);
printf("Enter %d elements into matrix\n", m*n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&matrix1[i][j]);
	}
}


//printing matrix1
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf(" %d ",matrix1[i][j]);
	}
	printf("\n");
}

printf("Enter size of matrix2");
scanf("%d%d",&p,&q);
printf("Enter %d elements into matrix\n", p*q);
for(i=0;i<p;i++){
	for(j=0;j<q;j++){
		scanf("%d",&matrix2[i][j]);
	}
}

//printing matrix2
for(i=0;i<p;i++){
	for(j=0;j<q;j++){
		printf(" %d ",matrix2[i][j]);
	}
	printf("\n");
}
printf("\n");
//precondition of addition matrix
if(m==p&&n==q){
	for(i=0;i<p;i++){
	for(j=0;j<q;j++){
matrix3[i][j]=matrix1[i][j]+matrix2[i][j];


}
   }
     }
     printf("MATRIX 3\n");
     //printing matrix3
for(i=0;i<p;i++){
	for(j=0;j<n;j++){
		printf(" %d ",matrix3[i][j]);
	}
	printf("\n");
}




}