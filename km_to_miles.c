

#include<stdio.h>
int main()
{
	float kilometers,miles;

	printf("enter the kilometers");
	scanf("%f",&kilometers);

	miles=(kilometers*0.621371);
	printf("miles = %.2f \n", miles);
}