#include<stdio.h>
int main()
{
  int a[5],b[5],i,c;
  for(i=0;i<5;i++)
  {	
	printf(" ENTER a[%d] :",i);
        scanf("%d",&a[i]);
  }
   for(i=0;i<5;i++)
  {	
 	printf(" ENTER b[%d] :",i);
        scanf("%d",&b[i]);
  }
  for(i=0;i<5;i++)
  {
	printf("\n  a[%d] :%d",i,a[i]);
	printf("\t b[%d] :%d",i,b[i]);
        c=a[i]+b[i];
        printf("\t TOTAL =%d",c);
  }
}
        

