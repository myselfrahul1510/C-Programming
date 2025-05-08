#include<stdio.h>
int main(int argc, char const *argv[])
{         int arri[4],arrj[4], sum[4];
          for (int i = 1; i <= 4; i++)
          {
                    printf("Enter the number for 1st array : ");
                    scanf("%d", &arri[i]);
                   
          }
           printf("\n\n");
           for (int j = 1; j <= 4; j++)
          {
                    printf("Enter the number for 2nd array : ");
                    scanf("%d", &arrj[j]);
          }
          for (int t = 1; t <= 4; t++)
          {
                    sum[t] = arri[t] + arrj[t];
          }

          for (int k = 1; k <= 4; k++)
          {
                   printf("the sum is : %d \n", sum[k]);
          }
          return 0;
}
