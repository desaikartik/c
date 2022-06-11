#include<stdio.h>
int main()
{
   int i=1,n=1;
   do
   {
     printf("\n %d",n*i);
     i++;
     n+=n;
   }while(i<=10);
}