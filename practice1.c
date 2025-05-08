#include  <stdio.h>
// void OddEvenNumber(int);
void OddEvenNumber(int)
{
          int num, check;
          printf("Enter the number: ");
          scanf("%d", &num);
          if (num%2 == 0)
          {
          printf("The number is Even Number");
          }
          else
          printf("The number is Odd number");
}

int main(int argc, char const *argv[])
{
          int call;
          OddEvenNumber(call);

          return 0;
}
