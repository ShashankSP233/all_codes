#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,len;
    char nm[25];
    printf("please enter your name: ");
    scanf("%s", &nm);
    for (len = 0; len < nm[len] != NULL; len++);
    for ( i=len-1 ; i>=0; i--)
    {
        printf("%c",nm[i]);
    }   
}