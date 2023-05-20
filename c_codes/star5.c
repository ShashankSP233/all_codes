#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j;

    for (i = 1; i < 6; i++)
    {
        for (j = 6 - i; j > 0; j--)
        {
            printf("*");
        }
        for (j = i-1; j > 0; j--)
        {
            printf("  ");

        }
        for (j = 6 - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}