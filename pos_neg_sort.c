#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    system("cls");
    printf("please enter number: ");
    scanf("%d", &num1);
    if (num1 > 0)
    {
        printf("%d is positive", num1);
    }
    else if (num1 == 0)
    {
        printf("%d is zero", num1);
    }
    else
    {
        printf("%d is negative", num1);
    }
}