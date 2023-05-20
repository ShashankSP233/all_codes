#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,k;
    for ( i = 1; i <= 5; i++)
    {
        if (i<4)
        {
            for (j= 3-i ; j>0; j--)
            {
                printf(" ");
            }
            for ( k=i ; k>0; k--)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (j= i-3; j>0; j--)
            {   
                printf(" ");
            }
            for ( k=6-i ; k>0; k--)
            {
                printf("* ");
            }
            printf("\n");
        }
        
    }
    
}