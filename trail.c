#include<stdio.h>
#include<stdlib.h>
void main()
{
int cont=2; 
char name[20],ans[20];

system("cls");
while (cont>1)
{
    printf("Thou shall pass this trial of mine,or yonder forever in the sunken isle:\n ");
    printf("what thy name is?");
    scanf("%s", &name);
    system("cls");
    printf("%s ",name);
    printf("are thee afraid of the depth, the fathomless sea\t(yes/no):\n");
    scanf("%s", &ans);
    if (strcmp(ans,"yes")==0)
    {
        system("cls");
        printf("does thyn cowerdence know no bound ya fail my trial\n now repent till the end");
        abort();
    }
    system("cls");
    printf("Are thee a creature of solace or are thee harbringer of despair \t(solace/despair)\n ");
    scanf("%s", &ans);
    if (strcmp(ans, "despair") == 0)
    {
        system("cls");
        printf("ya foolish pitiful beast who fell to despair ya fail my trial\n now be alone and spread no pain");
        abort();
    }
    system("cls");
    printf("ya willow in night or relish the day \t(night/day)\n ");
    scanf("%s", &ans);
    if (strcmp(ans, "day") == 0)
    {
        system("cls");
        printf("you brave one who can dare to walk under sun but the exit is shrouded in darknesss ya fail my trial\n now be in forever day");
        break;
    }
    printf("ya pass");
    break;
}
}