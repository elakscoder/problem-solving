#include<stdio.h>
int main()
{
    int c=3;int no=30;
    do
    {
        no/=c;
        printf("%d\n",no);
        /* code */
    } while (c!=0);
    
    return 0;
}