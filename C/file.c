#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("main.txt","a");
    fprintf(fp,"abcde----fghijk\n");
    fclose(fp);
    return 0;
}