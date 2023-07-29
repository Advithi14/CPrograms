#include <stdio.h>
#include <string.h>


int main() 
{
   char str1[30] = "why?but; not?";
   char str2[10] = "?; \t";
   char *t;

    t=strtok(str1, str2);
    while(*t!=NULL){
      printf("%s\n",t);
      t=strtok(NULL,str2);
    }
   
 }
