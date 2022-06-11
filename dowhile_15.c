#include<stdio.h>
int main()
{
    int i=1,j;
    char ch=65;
    do
   {
      j=1;
      do
      { 
               printf("\t %c",ch++); 
               j++;     
      }while(j<=5);
    i++;
    printf("\n");
   }while(i<=5);
}