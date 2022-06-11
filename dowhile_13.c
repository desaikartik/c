#include<stdio.h>
int main()
{
    char i=1,j;
    do
   {   
       j=1;    
       do
      {
        printf("\t %c",i+64);
        j++;            
      }while(j<=5);
     i++;
    printf("\n");    
   }while(i<=5);
}