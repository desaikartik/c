#include<stdio.h>
int main()
{
    int i=1,j,sp=10;
    while(i<=5)
    {
        j=1;
    	while(j<=sp)
   	 {
       		printf(" ");
      		 j++;
         }
      	j=1;
    	while(j<=i)
   	 {
       		printf(" *");
      		 j++;
         }
    printf("\n");	
    i++;
    sp--;
    }
   



 i=1;
 while(i<=5)
    {
        j=11;
    	while(j>=sp)
   	 {
       		printf(" ");
      		 j--;
         }
      	j=4;
    	while(j>=i)
   	 {
       		printf(" *");
      		 j--;
         }
    printf("\n");	
    i++;
    sp--;
    }


}
   