#include <stdio.h>
#include <stdlib.h>

void main()
{
    int S1,i;
    system("cls");
    printf("please enter num: ");
    scanf("%d", &S1);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n",S1,i,S1*i);
    }
}