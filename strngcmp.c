#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Hyd";
	printf("%d\n",strlen(str1));

	char str2[10],str3[10];
	printf("enter a name");
	scanf("%s",str2);
	printf("enter a name");
	scanf("%s",str3);

	if(strcmp(str2,str3)==0)
		printf("strings are same\n");
	else
		printf("strings are not same\n");

	char str4[10],str5[10];
	printf("enter a string");
	scanf("%s",str4);
	printf("enter a string");
	scanf("%s",str5);
	strcpy(str4,str5);
	printf("first string is %s\t second string is %s\n",str4,str5);


	char str6[10],str7[10];
	printf("enter a string");
	scanf("%s",str6);
	printf("enter a string");
	scanf("%s",str7);
	strcat(str6,str7);
	printf("first string is %s\t second string is %s\n",str6,str7);
	strcat(str6," ");
	printf("now first string is %s\n",str6);





















	

	


}