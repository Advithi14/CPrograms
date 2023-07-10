#include<stdio.h>
#define rows 5
#define cols 5
int main(){
int m1[rows][cols], m2[rows][cols], m3[rows][cols];
int i,j,k,m,n,p,q;

printf("Enter size of m1 matrix");
scanf("%d%d",&m,&n);
printf("Enter %d elements into m1\n", m*n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d",&m1[i][j]);
	}
}
//printing m1
for(i=0;i<m;i++){
	printf("\n");
	for(j=0;j<n;j++){
		printf(" %d ",m1[i][j]);
	}
}

printf("\nEnter size of m2 matrix");
scanf("%d%d",&p,&q);
printf("Enter %d elements into m2\n", p*q);
for(i=0;i<p;i++){
	for(j=0;j<q;j++){
		scanf("%d",&m2[i][j]);
	}
}
//printing m2
for(i=0;i<p;i++){
	printf("\n");
	for(j=0;j<q;j++){
		printf(" %d ",m2[i][j]);
	}
}
printf("\n")

//pre condition for matrix multiplication

if(n!=p)
return0;

for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }


//printing matrix 3
    for(i=0;i<m;i++){
	printf("\n");
	for(j=0;j<q;j++){
		printf(" %d ",m3[i][j]);
	}
}

printf("\n");
}



















