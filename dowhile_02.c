#include<stdio.h>
int main()
{
  int i=1,n;
   printf("\n enter number:");
   scanf("%d",&n);
   do
   {
     printf("\n %d",n--);
   }while(n>=i);
}