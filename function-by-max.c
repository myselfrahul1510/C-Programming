#include <stdio.h>
int func1(int);
//void func1(int)
int func1(int)
{
          int a, b;
          printf("Enter the 1st numbers :");
          scanf("%d", &a);
          printf("Enter the 2nd numbers :");
          scanf("%d",&b);
          if (a>b)
          {
                    printf("%d is the maximum number",a);
          }
          else
          printf("%d is the maximum number", b);
          
}
int main()
{        int maximum;
          func1(maximum);
        
          return 0;
}

