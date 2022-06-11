#include<stdio.h>
int main()
{
   int i,n,a=0,b=1,c=1;
   printf("\n enter no.:");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
     printf("\n %d",c);
     c=a+b;
     a=b;
     b=c;
}


}