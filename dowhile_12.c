#include<stdio.h>
int main()
{
    int i=5,j;
    do
   {   
       j=5;    
       do
      {
        printf("\t %d",i);
        j--;            
      }while(j>=1);
     i--;
    printf("\n");    
   }while(i>=1);
}