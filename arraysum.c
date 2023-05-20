#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,sum=0,num[5];
    for ( i = 0; i < 5; i++)
    {
        printf("please enter your num: ");
        scanf("%d", &num[i]);
        sum+=num[i] ;
    }
    printf("the sum is: %d",sum);
}