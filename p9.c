// display this G.P 1,2,4,8 upto n terms

#include<stdio.h>
int main(int argc, char const *argv[])
{         int a=1,b,n;
          printf("enter the number\n");
          scanf("%d",&n);
          b = a * 2 * n;
          printf( "The %dth g.p terms is %d ",n,b);
          
          for (int i = 0; i < n; i++)
          {         
                  a =  a * 2^(n-1);
                  printf("%d",a);
          }
          

          return 0;
}
