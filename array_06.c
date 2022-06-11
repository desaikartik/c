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
	b=b+a[i];	
  }
	printf("\n TOTAL:%d",b);
}
        

