#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,rev_num,i;
    system("cls")
    printf("please enter the num: ");
    scanf("%d", &num);
    rev_num=0;
    for (i=num; i >0 ; i/=10)
    {
        rev_num=rev_num*10 + num%10;
        num=num/10;
    }
    printf("your reversed number is %d",rev_num);
}