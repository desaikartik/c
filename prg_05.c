#include<stdio.h>
int main()
{
    float i,k=0.5,n=0.5;
    for(i=0;i<=10;i++)
    {
      printf("\t %2f",k);
      k+=(n+i);
    }
}