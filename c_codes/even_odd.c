#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1;
    system("cls");
    printf("please enter number: ");
    scanf("%d", &num1);
    if (num1%2 == 0)
    {
        printf("%d is even",num1);
    }
    else
    {
        printf("%d is odd", num1);
    }
}