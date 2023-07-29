#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	int pages;
	float price;
	int isdn;
};
int main(){
	int i;
	struct book b[3];
	for(i=0;i<3;i++){
		printf("Enter book %d details\n",(i+1));
		printf("enter title of the book");
		scanf("%s",b[i].title);
		printf("Enter author of the book");
		scanf("%s",b[i].author);
		printf("Enter no of pages");
		scanf("%d",&b[i].pages);
		printf("Enter price");
		scanf("%f",&b[i].price);
		printf("Enter isdn");
		scanf("%d",&b[i].isdn);

	}
	printf("Book Details:\n");
	printf("BOOK TITLE:\tBOOK AUTHOR:\tPAGES:\tPRICE:\tISDN:\n");
	for(i=0;i<3;i++){
	printf("%s\t%s\t%d\t%f\t%d\n",b[i].title,b[i].author,b[i].pages,b[i].price,b[i].isdn);

}
int min=b[0].pages,j,k;
float max=b[0].price;
for(i=0;i<3;i++){
	if(max<b[i].price){
		max=b[i].price;
        j=i;
	}
	if(min>b[i].pages){
		min=b[i].pages;
		k=i;
	}
}
	printf("MAXIMUM PRICE:%f\n",max);
	printf("MINIMUM PAGES:%d\n",min);
	printf("Book Details:\n");
	printf("BOOK TITLE:\tBOOK AUTHOR:\tPAGES:\tPRICE:\tISDN:\n");
	printf("MAXIMUM PRICED BOOK\n");
	printf("%s\t%s\t%d\t%f\t%d\n",b[j].title,b[j].author,b[j].pages,b[j].price,b[j].isdn);
	printf("MINIMUM PAGES BOOK");
	printf("%s\t%s\t%d\t%f\t%d\n",b[k].title,b[k].author,b[k].pages,b[k].price,b[k].isdn);





}