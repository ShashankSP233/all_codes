#include<stdio.h>
#include<stdlib.h>
void main()
{
    int len=0,i,t=0;
    char ch[20];
    printf("please enter char:");
    scanf("%s", &ch);
    for ( i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    // printf("%d",len);
    for (i = 0; i < len; i++)
    {
        if (ch[i] != ch[len-i-1])
        {
            t = 1;
            break;
        }
    }
    if (t>=1)
    {
        printf("%s is not a palindrome", ch);
    }
    else
    {
        printf("%s is a palindrome", ch);
    }
 
}
