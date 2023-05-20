#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1,n2,t,i,limit;
    printf("please enter the num: ");
    scanf("%d", &limit);
    n1=0;
    n2=1;
    for (i = 0; i <=limit; i++)
    {
        printf("%d\n",n1);
        t=n2;
        n2=n1+n2;
        n1=t;
    }
printf("the %d th fibonaci term is %d", limit, n1);
}