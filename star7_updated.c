#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, k,row;
    printf("please enter your num: ");
    scanf("%d", &row);
    if (row%2==0)
    {row-=1;}
    for (i = 1; i <= row; i++)
    {
        if (i <= row/2)
        {
            for (j = row/2 +1 - i; j > 0; j--)
            {
                printf(" ");
            }
            for (k = i; k > 0; k--)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (j = i - row/2 -1; j > 0; j--)
            {
                printf(" ");
            }
            for (k = row +1  - i; k > 0; k--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
}