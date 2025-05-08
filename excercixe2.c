#include <stdio.h>

int main()
{
         int marks; 
         //for passing in both subject the marks is greater than 600.
 // for passing only math subject the marks is greater than 400.
 // for passing only science the marks is greater than 300.

          printf("enter the total number\n");
          scanf("%d", &marks);
          printf("you have enter you total number %d for passing the exam\n", marks);

          if (marks>=600)
          {
                    printf("you will gift 50 ruppes");
          }
          else if (marks>=400)
          {
                    printf("you will gift 30 ruppes");
          }
          else if (marks>=300)
          {
                    printf("you will gift 10 ruppes");
          }
          else{
                    printf("you will fine 10 ruppes");
          }

          
          
          return 0;
}
