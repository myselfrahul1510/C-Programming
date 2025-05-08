#include<stdio.h>
int main()
{
          int subject;
          int age;
          printf("enter the passing subject\n");
          printf("enter the student age\n");
          scanf("%d", &subject);
          scanf("%d", &age);
          printf("Subject number %d\nThe age of student %d\n",subject,age);
         // printf("enter the age %d\n",age);
          //printf("enter age %d which is the student age\n",age);
          if (subject >5, age>14)
          {
                    printf("you get 50 ruppees");
          }
          else if (subject >3, age<14)
          {
                    printf("you get 30 ruppess"); 

          }
          else{
                    printf("you get 20 ruppess");
          }

          return 0;
}
