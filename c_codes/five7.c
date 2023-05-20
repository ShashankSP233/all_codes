//  print number between 1 to 50 divisible by both 5 and 7
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {if(i%5==0 && i%7==0)
       { printf("%d\n", i);}
    }
}