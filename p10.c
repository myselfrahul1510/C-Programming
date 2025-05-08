// count the digit of a number
#include<stdio.h>
int main()
{         
          int num,count,digit;
          printf("Enter the number \n ");
          scanf("%d",&num);
       while (num>0)
       {
         num = num / 10 ;
          digit  ++ ;
         
         }

        printf("the digit is %d ", digit);
         
          

          return 0;
}
