#include <stdio.h>
void main()
{
    int num[5], i, j, a;

    for (i = 0; i < 5; ++i)
    {
        printf("Enter the numbers ");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; ++i)
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("The numbers in ascending order is:");

    for (i = 0; i < 5; ++i)
    {
        printf("%d ", num[i]);
    }
}