#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int multiply(int,int);
int division(int,int);
int remainder(int,int);
int main(){
	int x,y,sum,diff,product,result,modulus;
	x=rand()%10+1;
	y=rand()%10+1;
	printf("%d\t%d\n",x,y);
	sum=add(x,y);
	diff=sub(x,y);
	product=multiply(x,y);
	result=division(x,y);
	modulus=remainder(x,y);

	printf("%d\t%d\t%d\t%d\t%d\t",sum,diff,product,result,modulus);
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b){

	return a-b;
}
int multiply(int a,int b)
{
	return a*b;
}
int division(int a,int b)
{
	return a/b;
}
int remainder(int a,int b)
{
	return a%b;
}







