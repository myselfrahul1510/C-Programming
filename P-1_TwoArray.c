#include <stdio.h>
int main(int argc, char const *argv[])
{
          int m,n;
          printf("Enter the size of 1st Element : ");
          scanf("%d",&m);
          printf("\n");

          int arr1[m],arr2[n];

          for (int i = 0; i < m; i++)
          {
                    printf("Enter the array %d element of 1st Array : ",i+1);
                    scanf("%d",&arr1[i]);
          }
          printf("\n");
          
          printf("1st Array Elements are : ");
          for (int k = 0; k < m; k++)
          {
                    printf("%d ",arr1[k]);
          }
          printf("\n\n\n\n");

          printf("Enter the size of 2nd Element : ");
          scanf("%d",&n);
          for (int j = 0; j < n; j++)
          {
                    printf("Enter the array %d element of 2nd Array : ",j+1);
                    scanf("%d",&arr2[j]);
          }
          printf("\n");

          printf("2nd Array Elements are : ");

          for (int l = 0; l < n; l++)
          {
                    printf("%d ",arr2[l]);
          }
          printf("\n\n\n\n");
          
          return 0;
}
