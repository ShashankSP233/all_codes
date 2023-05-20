#include <stdlib.h>
#include <stdio.h>
void main()
{
int num,i,sum=0;
for ( i = 0; i < 10; i++)
{
    printf("please enter num: ");
    scanf("%d",&num);
    sum+=num;
}
printf("your sum is: %d",sum);
}