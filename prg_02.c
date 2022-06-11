#include<stdio.h>
int main()
{
    int i,n=1;
    for(i=1;i<=10;i++)
    {
      printf("\n %d",n*i);  
       n+=n;  
    }
}