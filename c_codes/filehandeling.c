#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char ch[80];
    // int i;
    fp = fopen("C:/Users/hellb/OneDrive/Desktop/shashank/plot.log", "r");
    // // fputs("hello my name is shashank",fp);
    // // fclose(fp);
    // // fp = fopen("wis.txt", "r");
    // fscanf(fp,"%s",&ch[20]);
    // printf("%s",ch);
    // // fclose(fp);
    fgets(ch,60,fp);
    printf("%s",ch);
}
