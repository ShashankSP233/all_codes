#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1 ,num2;
    system("cls");
    printf("please enter number1: ");
    scanf("%d", &num1);
    printf("please enter number3: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d > %d", num1,num2);
    }
    else
    {
        printf("%d < %d", num1, num2);
    }
}