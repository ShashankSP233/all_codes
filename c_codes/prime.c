#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,  i;
    printf("please enter the num: ");
    scanf("%d", &num);
    if (num == 2 || num == 3)
    {
        printf("it is  prime");
    }

    for ( i = 2; i < num/2+1; i++)
    {

        if (num%i ==0)
        {
            printf("it is not prime");
            break;
        }
        else if(i==num/2)
        {
            printf("it is  prime");
        }
    }
    
}