#include<stdio.h>
int main()
{
    char my[255];
    FILE *fp;
    fp=fopen("main.txt","r");
   /*  fprintf(fp,"A - B\nC - D\nE - F\nG - H\nI - J\nK - L\nM - N\nO - P\nQ - R\nS - T\nU - V\nW - X\nY - Z\n"); */
   if(fp!=NULL)
   {
    while(fgets(my,255,fp))
    printf("%s",my);
   }else{
    printf("File does not exist");
   }
   
    fclose(fp);
    return 0;
}