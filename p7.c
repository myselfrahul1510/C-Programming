#include <stdio.h>
void starpattern (int rows)
{
          for (int i = 0; i < rows; i++)
          {
                    for (int j = 0; j <= i; j++)
                    {
                              printf("*");
                    }
                    printf("\n");
          }
}
void reversestarpattern (int rows)
{
          for (int i = 0; i < rows; i--)
          {
                    for (int j = 0; j <= i; j--)
                    {
                              printf("*");
                    }
                    printf("\n");
          }
}
int main()
{
          int a;
          printf("chose the option \n1 for the starpattern\n2 for the reverse starpattern\n",a);
          scanf("%d", &a);

          if (a == 1)
          {
                    int rows;
                    printf("How many starpattern you want \n");
                    scanf("%d", &rows);
                    starpattern(rows);
                    return 0;
          }
          else (a == 2);
          {
                    int rows;
                    printf("How many reverse starpattern you want \n");
                    scanf("%d", &rows);
                    reversestarpattern(rows);
                    return 0;
          }
}
