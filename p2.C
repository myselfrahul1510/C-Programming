#include<stdio.h>
int main()
{
          int marks,age;
          printf("ENTER YOU MARKS\n");
          scanf("%d",&marks);
          printf("ENTER YOU age\n");
          scanf("%d",&age);

          switch (marks)
          {
          case 15:
                    printf("That's mean you get 15 to 25 marks out of 100 and you fail the exam\n");
                    switch (age)
                    {
                    case 6:
                             printf ("your age is 5");
                              break;
                    
                    default:("you age is not 5");
                              break;
                    }
                    break;
          case 26:
                    printf("that's mean you get 26 to 35 marks and you pass the exam\n");
          switch (age)
          {
          case 9:
                    printf("your age is 9");
                    break;
          
          default: printf("your age is not 9");
                    break;
          }
          break;

          default:
          printf("you pass the exam");
                    break;
          }

          return 0;
}

