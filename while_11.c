#include<stdio.h>
int main()
{
   float i=0,k=0.5,n=0.5;
   while(i<=10)
   {
     printf("\t %2f",k);
     k+=(n+i);
     i++;
   }
}