#include<stdio.h>
#include<stdlib.h>

void main()
{
    int num1,num2,sum;
    system("cls");
    do
    {
        printf("please enter first number: ");
        scanf("%d",&num1);
        printf("please enter second number: ");
        scanf("%d",&num2);
        sum=num1+num2;
        if (sum%2==0)
        {
           printf("your sum was even: %d \n",sum);
        }
        
    }
     while (sum%2==0);
    printf("your sum was finaly odd");
}