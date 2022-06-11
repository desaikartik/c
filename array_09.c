#include <stdio.h>
int main()
{
      int i, j, a[5][5], total = 0, b = 0, c = 0;
      for (i = 0; i < 3; i++)
      {
            for (j = 0; j < 3; j++)
            {
                  printf("enter a[%d][%d] :", i, j);
                  scanf("%d", &a[i][j]);
            }
      }
      for (i = 0; i < 3; i++)
      {
            for (j = 0; j < 3; j++)
            {
                  printf("\t%d", a[i][j]);
            }
            printf("\n");
      }
      printf("\n");
      for (i = 0; i < 3; i++)
      {
            for (j = 0; j < 3; j++)
            {
                  if (i == j)
                  {
                        total += a[j][j];
                  }
                  if (i < j)
                  {
                        b += a[i][j];
                  }
                  if (i > j)
                  {
                        c += a[i][j];
                  }
            }
            printf("\n");
      }
      printf("\ttotal diagonal:%d", total);
      printf("\n\tupper tringle:%d", b);
      printf("\n\tlower tringle:%d", c);
}