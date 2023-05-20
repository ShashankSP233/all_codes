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
        if (nm[i] == 'a' || nm[i] == 'e' || nm[i] == 'i' || nm[i] == 'o' || nm[i] == 'u')
        {
            vovel_cnt++;
        }
    }
    printf("no of vovels=%d", vovel_cnt);
}