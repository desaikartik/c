#include<stdio.h>
int main()
{ 
    int i=0,a=0,b=1,c=1,n;
    printf("\n enter no.:");
    scanf("%d",&n);
    do{
       printf("\n %d",c);
       c=a+b;
       a=b;
       b=c;
       i++;
      }while(i<=n);
}