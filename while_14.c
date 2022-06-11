#include<stdio.h>
int main()
{
    int i=1,j,n=2;
    while(i<=5)
   {
      j=1;
      while(j<=5)
      {
        printf("\t %d",n);
        j++;
      }
    i++;
    n+=2;
    printf("\n");
   } 
}