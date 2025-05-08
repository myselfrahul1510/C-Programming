// find nth number in 4,7,10 .... this A.P & also find upto nth terms 

#include<stdio.h>
int main()
{         
          int a,n,b;
          printf("ENTER THE NUMBER \n");
          scanf("%d", &n);
          b = 3*n -2;
          printf("The %dth number of value is %d \n", n,b);

          a = 1;
          printf("The A.P series is      ");
          for (int i = 0; i < n; i++)
          {
                 a = 3 + a;  
                 printf("%d\t",a); 
          }
          







          return 0;
}
