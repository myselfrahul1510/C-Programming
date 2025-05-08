// 1. Write a program in c to display the first 10 natural numbers.

/*#include <stdio.h>
int main()
{         
          printf("The 10 natural number is : ");
          for (int i = 1; i <= 10; i++)
          {
                    printf("%d ",i);
          }
          

          return 0;
}*/

// 2. Write a C program to compute the sum of the first 10 natural numbers.

/*#include <stdio.h>
int main()
{         int sum;
          sum = 0;
          printf("the sum of the first 10 digits are: ");
          for (int i = 1; i <= 10; i++)
          {        
                    sum = sum + i;
          }
          printf("%d",sum);
          return 0;
}*/

// 3. Write a program in C to display n terms of natural numbers and their sum.

/*#include <stdio.h>
int main()
{         int n,sum;
          sum = 0;
          printf("Enter the digit upto which you want : ");
          scanf("%d", &n);
          printf("The natural numbers are : ");
          for (int i = 1; i <= n; i++)
          {
                    printf("%d ",i);
                    sum = sum + i;
          }
          printf("\n");
          printf("the sum of this numbers are: %d", sum);
          return 0;
}*/

// 4. Write a C program to display the n terms of odd natural numbers and their sum.
// like : 1 3 5 7 .... n

/* #include <stdio.h>
int main()
{         int n, sum = 0;
          printf("Enter the digit upto which you want : ");
          scanf("%d", &n);
          printf("The odd numbers are : ");
          for (int i = 0; i <= n; i++)
          {if (i%2 != 0)
          {
                    printf("%d ",i);
                    sum = sum + i;
          }
          }
          printf("\n");
          printf("The sum of odd numbers are : %d", sum);
          
          
          return 0;
}*/

// 5. Write a C program to display the sum of n terms of even natural numbers.

/* #include <stdio.h>
int main()
{         
          int n, sum = 0;
          printf("Enter the digit upto which you want : ");
          scanf("%d", &n);
          printf("The odd numbers are : ");
          for (int i = 1; i <= n; i++)
          {if (i%2 == 0)
          {
                    printf("%d ",i);
                    sum = sum + i;
          }
          }
          printf("\n");
          printf("The sum of odd numbers are : %d", sum);
          

          return 0;
}*/

// 6. Write a program in C to display the n terms of a harmonic series and their sum.
// The series is : 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

/*#include<stdio.h>
int main()
{          int n;
          float sum = 1;
          printf("Enter the digit upto which you want : ");
          scanf("%d", &n);
          
          printf("The series is :\n1\n"); 
          for (int i = 2; i <=n; i++)
          {
                    printf("1/%d \n",i);
                    sum = sum + (1/i) ;
          }
          printf("%f", sum);
          
          return 0;
}*/
// 7. Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
/*
#include <stdio.h>
int main()
{         int n;
          printf("The enter number upto which you want: ");
          scanf("%d",&n);
          printf("1 ");
          for (int i = 1; i <= n ; i++)
          {
                    printf(" + x^%d/%d",i,i);

          }
          
          return 0;
}
*/
// 8. Write a C program that displays the n terms of square natural numbers and their sum.
//The series is as below:
//1 4 9 16 ... n Terms

/*#include <stdio.h>
int main(int argc, char const *argv[])
{         int n,sum;
          printf("enter the digit upto which you want : ");
          scanf("%d",&n);
          for (int i = 0; i <= n; i++)
          {
                    sum = i * i;
                    printf("%d  ", sum);
          }
          



          return 0;
}*/

// 9. Write a C program to check whether a given number is a 'Perfect' number or not.
/* 
 Perfect number is a positive number which sum of all positive divisors 
excluding that number is equal to that number.
 For example, 6 is a perfect number since the divisors of 6 are 1, 2, and 3. 
Sum of its divisors is 1 + 2 + 3 = 6
*/

/*
#include<stdio.h>
int main()
{         int n,i,sum=0;
          printf("input the number: ");
          scanf("%d",&n);
          printf("The divisors are : ");
          for (int i = 1; i < n; i++)
          {
                    if (n % i == 0)
                    {
                              printf("%d ",i);
                              sum = sum + i;
                              
                    }
                              
          }
          printf("\nthe sum of the digit is : %d\n", sum);

if (sum == n)
{
          printf("The number is perfect number");
}
else if (sum != n)
{
          

printf("The number is not perfect number");

}      
          return 0;
}
*/
// //Write a C program to check whether a given number is an Armstrong number or not.
// When the sum of the cube of the individual digits of a number is equal to that 
// number, the number is called Armstrong number. For Example 153 is an 
// Armstrong number because 153 = 1^3+5^3+3^3
#include <stdio.h>
int main()
{         int number,digit, sum; 
          printf("Enter the number : ");
          scanf("%d",&number);
          while (number != 0)
          {
                    digit = number % 10;
                    digit = digit*digit*digit;
                    sum = sum + digit;
                    number = number /10;
                    
          }printf("the cubic sum of the digits are : %d\n", sum);
          if (sum != number)
          {
                    printf("This is armstrong number ");
          }
          else printf("This is not a Armstrong number");
          
          
          return 0;

}
