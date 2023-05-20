#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    system("cls");
    printf("please enter number: ");
    scanf("%d", &num1);
    if (num1%5==0 && num1%7==0 && num1%9==0)
    {
        printf("%d is dividible by 5,7,9", num1);
    }
    else
    {
        printf("%d is not divisible by 5,7,9", num1);
    }
}