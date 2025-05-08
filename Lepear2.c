#include<stdio.h>

int main()
{
          int a;
          printf("enter the year \n");
          scanf("%d",&a);

          if (a%400 == 0)                                             
          {         
                   printf("the year is lepear");

          }
          else if (a%4 == 0 && a%100 != 0)
          {
                    printf("the year is lepear");
          }
          
          else
           {
                    printf("the year is not lepear");
          }
          return 0;
}
