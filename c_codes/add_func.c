#include <stdio.h>

int adtn(int num1,
          int num2);
int adtn(int num1,
          int num2)
{
    // printf("your sum is:%d", num1 + num2);
    return num1+num2;
}
void main()
{
    int a, b;
    printf("please enter two number");
    scanf("%d%d", &a, &b);
    printf("%d",adtn(a, b));
}