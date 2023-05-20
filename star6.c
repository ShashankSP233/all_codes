#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j;
    for (i = 1; i < 10; i++)
    {
        if (i < 6)
        {
            for (j = i; j > 0; j--)
            {
                printf("*");
            }
        }

        if (i >= 6)
        {
            for (j = 10 - i; j > 0; j--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
