#include<stdio.h>

int fac(int num1);
int fac(int num1)
{
    if (num1>1)
    {
        return num1 * fac(num1 - 1);
    }
    else
    {
        return 1; 
    }
} 
void main()
{
    int a;
    printf("please enter number:");
    scanf("%d",&a);  
    printf("your factorial is:%d", fac(a));
}