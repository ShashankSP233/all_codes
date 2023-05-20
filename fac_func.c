#include <stdio.h>

void fac();
void fac()
{
    int temp = 1, i, limit;
    printf("please enter no.: ");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        temp *= i;
    }
    printf("the factorial of %d is: %d", limit, temp);
}
void main()
{
    fac();
}