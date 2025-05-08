#include<stdio.h>
void PrimeNumber(int);
void PrimeNumber(int)
{
          int num,check = 0 ;
          printf("Enter the number ");
          scanf("%d", &num);
          for (int i = 2; i < num; i++)
          {
          if (num % i == 0)
          {         
          check++;
          }
          }
          if (check == 0)
          {
                    printf("Enter number is prime ");

          }
          else      {
          printf("Enter number is not prime");
          }
}
int main()
{         int call;
          PrimeNumber(call);

          return 0;
}

