#include<stdlib.h>
#include<stdio.h>
void main()
{
int pos_count=0,neg_count=0,zero_count=0,i,num;
system("cls");
for ( i = 0; i < 10; i++)
{
    printf("please enter %d num:",i);
    scanf("%d",&num);
    if (num>0)
    {
        pos_count++;
    }
    else if (num<0)
    {
        neg_count++;
    }
    else
    {
        zero_count++;
    }
}
system("cls");
printf("you input %d +ve number\n",pos_count);
printf("you input %d -ve number\n",neg_count);
printf("you input %d zero number",zero_count);
}
