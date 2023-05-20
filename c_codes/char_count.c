#include <stdlib.h>
#include <stdio.h>
void main()
{
    int alp_count = 0, num_count = 0, spl_count = 0, i;
    char ch;
    system("cls");
    for (i = 1; i <= 10; i++)
    {
        printf("please enter %d char:", i);
        scanf("\n%c", &ch);
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            alp_count++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            num_count++;
        }
        else
        {
            spl_count++;
        }
        system("cls");
    }
    system("cls");
    printf("you input %d alphabet\n", alp_count);
    printf("you input %d number\n", num_count);
    printf("you input %d special char", spl_count);
}
