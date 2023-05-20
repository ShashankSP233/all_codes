#include<stdio.h>
#include<stdlib.h>

void main()
{
char cht;
system("cls");
printf("please enter your character: ");
scanf("%c",&cht);

if (cht>='A' && cht<='Z')
{
printf("character %c is Uppercase",cht);
}
else
{
    printf("character %c is Lowercase", cht);
}
}