
   
#include <stdio.h>
void func1(int);
void func1(int)
{
    int a = 100;
    int b = 200;
    int sum;
    sum = a + b; 
    printf("the sum is : %d \n", sum);
}
int main()
{    int sum;
    func1(sum);
    return 0;
}

