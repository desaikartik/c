#include<stdio.h>
int main()
{
  char ch;
  for(ch=65;ch<=122;ch++)
 {   
      if(ch>=65 && ch<=90)
      printf("\t %c",ch);
      ch=ch+34;
      if(ch>=99 && ch<=122)
      printf("\t %c",ch);
      ch=ch-31;
}
}