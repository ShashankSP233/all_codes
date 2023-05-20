#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch[20];
    int i;
    printf("please enter ur name: ");
    scanf("%s",&ch);
    printf("please enter times: ");
    scanf("%d",&i);
    for(i;i>0;i--)
    {
        printf("%s",ch);
    }
}