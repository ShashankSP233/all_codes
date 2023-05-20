#include <stdio.h>

void main()
{
    char name[4][30];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        printf("enter Name: ");
        scanf("%s", &name[i]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; name[i][j] != NULL; j++)
        {
            if (name[i][j] >= 'A' && name[i][j] <= 'Z')
            {
                name[i][j] += 32;
            }
        }
        printf("Name is %s\n", name[i]);
    }
}