#include<stdio.h>
int main()
{
     int  i,n;
     printf("\n enter N:");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
        i=i+1;  
        printf("\n %d",i);
        printf("\n %d",(i+1)*(i+1));
     }
}