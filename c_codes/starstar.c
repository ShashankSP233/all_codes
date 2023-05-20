/*
                    *
                   ***
                  *****
                 *******
           *******************
            *****************
             ***************
              *************
             ***************
            *****       *****   
           ***             ***
          *                   *

*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j, k, str_count;
    for(i=1;i<=12;i++)
    {
        if (i<=4)
        {
            str_count=2*i-1;
            for ( k = 9-i; k >0; k--)
            {
                printf(" ");
            }
            for ( j=str_count; j >0 ;j--)
            {
                printf("*");
            }
        }
        else if (i<=9)
        {
            str_count=19-(i-4)*2;
            for ( j = i-5; j >0; j--)
            {
                printf(" ");
            }
            for (j = str_count; j > 0; j--)
            {
                printf("*");
            }
        }
        // else if (i==9)
        // {
        //     continue;;
        // }
          
        else if (i>9)
        {

            str_count=5-2*(i-10);
            for ( j=13-i; j >0; j--)
            {
                printf(" ");
            }
            for ( k = str_count; k > 0; k--)
            {
                printf("*");
            }
            for ( j = i-10; j >0; j--)
            {
                printf("     ");
            }
            for ( j = i-9; j >0; j--)
            {
                printf(" ");
            }
            for (k = str_count; k > 0; k--)
            {
                printf("*");
            }
        }
        
        printf("\n");
    }
            
}
