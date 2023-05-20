#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,num[6];
    for (i = 0; i < 6; i+=2)
    {
        printf("please enter your num: ");
        scanf("%d", &num[i]);
        num[i+1]=num[i]*num[i];
    }
    for ( i = 0; i < 6; i++)
    {
        printf("%d\t",num[i]);
    }
    
}