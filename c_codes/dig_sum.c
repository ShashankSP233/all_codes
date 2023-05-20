#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num, sum, i;
    system("cls")
    printf("please enter the num: ");
    scanf("%d", &num);
    sum = 0;
    for (i = num; i > 0; i /= 10)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("your sum is %d", sum);
}