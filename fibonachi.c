#include <stdio.h>

int fibo(int num1);
int fibo(int num1)
{
    if (num1 > 2)
    {
        return fibo(num1-1)+fibo(num1-2);
    }
    else if (num1==1 || num1==2)
    {
        return 1;
    }
    else 
    {
    printf("you have failed to input a proper term ");
    return 0;
    }
}
void main()
{
    int a;
    printf("please enter number:");
    scanf("%d", &a);
    printf("your fibonachi is:%d", fibo(a));
}