#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j, row;
    printf("please enter your num: ");
    scanf("%d", &row);
    row=row+1;
     for (i = 1; i < row; i++)
    {
        if (i <=row/2)
        {
            for (j = i; j > 0; j--)
            {
                printf("*");
            }
        }

        if (i >= row/2+1)
        {
            for (j = row - i; j > 0; j--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
