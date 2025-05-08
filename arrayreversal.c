#include <stdio.h>
int main()
{
          int n;
          printf(" What is the size of your array : ");
          scanf("%d", &n);
          int arr[n];
          for (int i = 1; i <= n; i++)
          {
                    printf("Enter the number : ");
                    scanf("%d", &arr[i]);
          }

          for (int j = n; j >= 1; j--)
          {
                    printf("the array digit is : %d \n", arr[j]);
          }

          return 0;
}
