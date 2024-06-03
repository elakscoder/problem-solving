#include<stdio.h>
int main()
{
    int i=0;
    do{
        i++;
        if(i==2)
        break;
        printf("%d In while loop\n",i);
    }while(i<3);
    printf("%d\n",i);
}
