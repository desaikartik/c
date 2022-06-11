#include<stdio.h>
int main()
{
  char ch=65;
  do
 {   
      if(ch>=65 && ch<=90)
      printf("\t %c",ch);
      ch=ch+34;
      if(ch>=99 && ch<=122)
      printf("\t %c",ch);
      ch=ch-31;
      ch++;
}while(ch<=122);
}