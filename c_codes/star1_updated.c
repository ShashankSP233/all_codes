#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j,row;
    printf("please enter your num: ");
    scanf("%d",&row);
    for (i = 1; i <=row; i++)
    {
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
