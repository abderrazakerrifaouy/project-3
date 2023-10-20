#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int x , i=0;
   char y[1] ;
   char z[1] = "m" ;
   char e[1] = ".";
   do{
        i=1;
    printf(" inter the characetr %d ",i);
   scanf("%s",y);
   if (strcmp(y,z)==0)
   {
    i++;
   }
   
   }while(strcmp(y,e)!=0);
}