#include<stdio.h>
int main()
{
   int a,b,c=1;
   printf("\n enter no.:");
   scanf("%d",&a);
   do
   {
      b=c*a;
      printf("\n %d",b);    
      c++;
   }while(c<=10);
}