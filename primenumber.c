#include <stdio.h>
int main()
{
       int a, b;
       printf("enter the number \n");
       scanf("%d", &a);
       for (int i = 1; i <= a; i++)
       {
              if (a % i == 0)
              {
                     b++;
              }
       }
       if (b == 2)
       {
              printf("the number is prime number");
       }
       else if (b < 2)
       {
              printf("1 is not prime or composite number");
       }
       else
              printf("the number is composite number");

       return 0;
}
