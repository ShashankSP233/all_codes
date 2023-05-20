#include <stdio.h>
#include <stdlib.h>

void main()
{
    int S1,S2,sum=0,i;
    system("cls");
    printf("please enter first num: ");
    scanf("%d", &S1);
    printf("please enter second num: ");
    scanf("%d", &S2);
    if (S1>S2)
    {
        i=S1;
        S1=S2;
        S2=i;
    }
    for ( i=S1; i <= S2; i++)
    {
        sum+=i;
    }
    printf("the sum is %d",sum);

}