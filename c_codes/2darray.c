#include <stdio.h>

void main()
{
    int i, j,no[2][4];
    for (i = 0; i < 2; i++)
    {
        printf("enter roll no: ");
        scanf("%d", &no[i][0]);
        printf("enter 3 sub marks: ");
        scanf("%d %d %d", &no[i][1], &no[i][2], &no[i][3]);
        no[i][4] = no[i][1] + no[i][2] + no[i][3] ;
        printf("##########################\n");
    }

    printf("\n");
        for (j = 0; j<=4; j++)
        {
            printf("%d\n ",no[0][j]);
        }
        printf("\n");
}