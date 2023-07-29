#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	char t[20];
	char days[7][10]={"sun",
                      "mon",   
                      "tue",
                      "wed",
                      "thurs",
                      "fri",
                      "sat"
                  };

for( i=0;i<7;i++){
	printf("%s\n",days[i]);

}

for(i=0;i<7-1;i++)
	for(j=i+1;j<7;j++)
		if(strcmp(days[i],days[j])>0){
			strcpy(t,days[i]);
			strcpy(days[i],days[j]);
			strcpy(days[j],t);
		}   

printf("strings after sorting\n");
for( i=0;i<7;i++){
	printf("%s\n",days[i]);
}
}