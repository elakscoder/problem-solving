#include<stdio.h>
#define ROW 5000
#define COL 20

int main()
{
    char str[50][20];
    int i = 0;
    printf("Enter the string: ");

    while(1)
    {
        scanf("%s",str[i]);

        if(getchar() == '\n')
        {
            break;
        }

        i++;
    }

    printf("Entered string: \n");
    for(int j=0;j<=i;j++)
    {
        printf("%s\n",str[j]);
    }

    return 0;
}