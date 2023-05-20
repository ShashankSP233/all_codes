#include <stdio.h>
#include<stdlib.h>
void main()
{
    int num,fac=1,i;
    printf("please enter the num: ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        fac*=i;
    }
    printf("the factorial of %d is %d",num,fac);
}