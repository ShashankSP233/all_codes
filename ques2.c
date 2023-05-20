#include <stdio.h>

void prime(int num);
void prime(int num)
{
    int i, count = 0;
    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count != 0)
    {
        printf("not prime");
    }
    else
    {
        printf("prime");
    }
}
void main()
{
    int num;
    printf("please enter your number:");
    scanf("%d", &num);
    prime(num);
}