#include<stdio.h>

void main()
{
    int n,m,mat1[2][2], mat2[2][2],mat3[2][2];
    for ( n = 0; n < 2; n++)
    {
        for ( m = 0; m < 2; m++)
        {
            printf("please enter elment of matrice 1 at pos (%d,%d): ",n,m);
            scanf("%d",&mat1[n][m]);
        }
        
    }
    for ( n = 0; n < 2; n++)
    {
        for ( m = 0; m < 2; m++)
        {
            printf("please enter elment of matrice 2 at pos (%d,%d): ",n,m);
            scanf("%d",&mat2[n][m]);
        }
        
    }

    for ( n = 0; n < 2; n++)
    {
        for ( m = 0; m < 2; m++)
        {
            mat3[n][m] = mat1[n][m] + mat2[n][m];
        }
        
    }

    for ( n = 0; n < 2; n++)
    {
        for ( m = 0; m < 2; m++)
        {
        printf("| %d |",mat3[n][m]);
        }
        printf("\n");
    }

}