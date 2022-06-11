#include<stdio.h>
int main()
{
   int i=0,n;
   printf("\n enter no.:");
   scanf("%d",&n);
   do
   {
     i=i+1;
     printf("\n %d",i);
     printf("\n %d",(i+1)*(i+1));
     i++;
   }while(i<=n);
}