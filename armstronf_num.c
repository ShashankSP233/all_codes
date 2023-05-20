 #include <stdio.h>
#include<math.h>
void main()
{
    int num, con_num, i,count=0,n;
    printf("please enter the num: ");
    scanf("%d", &num);
    con_num = 0;
    n=num;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    for (i = num; i > 0; i /= 10)
    {
        con_num += powf(i % 10, count);
    }

    if (con_num == num)
    {
        printf("%d is an armstrong number",num);
    }

    else
    {
        printf("%d is not an armstrong number", num);
    }
}

