#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, vovel_cnt = 0;
    char nm[25];
    printf("please enter your name: ");
    scanf("%s", &nm);
    for (i = 0; i < nm[i] != NULL; i++)
    {
        if (nm[i] >= 'A' && nm[i] <= 'Z')
        {
            nm[i] = nm[i]+32;
        }
        printf("%c", nm[i]);
    }
}