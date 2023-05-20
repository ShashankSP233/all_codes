#include <stdio.h>
#include <stdlib.h>

void main()
{
    int s1,s2,s3;
    system("cls");
    printf("please enter first side: ");
    scanf("%d", &s1);
    printf("please enter second side: ");
    scanf("%d", &s2);
    printf("please enter third side: ");
    scanf("%d", &s3);
    if (s1==s2 && s2==s3)
    {
        printf("your triangle is a eqilateral");
    }
    else if (s1==s2 || s2==s3 || s1==s3)
    {
        printf("your triangle is isoceles");
    }
    else
    {
        printf("triangle is scalar");
    }
}