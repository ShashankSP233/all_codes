#include <stdio.h>

void evnoff(int a);
void evnoff(int a)
{
    if (a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
}
void main()
{
    int a;
    printf("please enter number");
    scanf("%d", &a);
    evnoff(a);
}