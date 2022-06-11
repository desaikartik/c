#include<stdio.h>
int main()
{
  int a[10],i,b=0;
  for(i=0;i<10;i++)
  {	
	printf(" ENTER a[%d] :",i);
        scanf("%d",&a[i]);
  }
  for(i=0;i<10;i++)
  {
        if(a[i]%2!=0)
	{
        printf("\n odd position no.:%d",a[i]);
	b=b+a[i];
	}	
  }
	printf("\n TOTAL:%d",b);
}