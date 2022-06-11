#include<stdio.h>
int main()
{
  int m1[5],m2[5],m3[5],total[5],per[5],i;
  for(i=0;i<5;i++)
  {	
        
	printf(" ENTER m1[%d] :",i);
        scanf("%d",&m1[i]);
	printf(" ENTER m2[%d] :",i);
        scanf("%d",&m2[i]);
	printf(" ENTER m3[%d] :",i);
        scanf("%d",&m3[i]);
  }
  printf("\nrollno\tm1\tm2\tm3\ttotal\tper");
  for(i=0;i<5;i++)
  {
	printf("\n%d ",i);
	printf("\t %d",m1[i]);
	printf("\t %d",m2[i]);
	printf("\t %d",m3[i]);		
	total[i]=m1[i]+m2[i]+m3[i];
        printf("\t %d",total[i]);
	per[i]=(m1[i]+m2[i]+m3[i])/3;
        printf("\t %d",per[i]);		
  }
  
  for(i=0;i<5;i++)
  {
	
  }
	
}
        

