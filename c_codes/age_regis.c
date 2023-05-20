#include<stdlib.h>
#include<stdio.h>
void main()
{
    int age;
    system("cls");
    printf("please enter your age: ");
    scanf("%d",&age);
    if (age <12)
    {
        printf("you are still a child");
    }
    else if (age <21)
    {
        printf("you are a teen");
    }
    else if (age <40)
    {
        printf("you are a adult");
    }
    else if (age <60)
    {
        printf("you are a grownup");
    }
    else if (age <70)
    {
        printf("you are a senior citizen");
    }
    else 
    {
        printf("you are endanger on earth");
    }
}