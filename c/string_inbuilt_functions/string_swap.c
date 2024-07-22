#include<stdio.h>
#include<string.h>

#define n 100

void strSwap(char **str1,char **str2)
{
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;

}

int main()
{
    char str1[n];
    char str2[n];

    printf("Enter string 1: ");
    scanf(" %[^\n]%*c",str1);

    printf("Enter string 2: ");
    scanf("%[^\n]%*c",str2);
    
    //words swap
    printf("Before swapping :\n str1 = %s, str2 = %s\n",str1,str2);

    strSwap(&str1,&str2);

    printf("After swapping :\n str1 = %s, str2 = %s\n",str1,str2);

    //sentence swap

    char *ptr1 = str1;
    char *ptr2 = str2;

    printf("Before swapping :\n str1 = %s, str2 = %s\n",ptr1,ptr2);

    strSwap(&ptr1,&ptr2);

    printf("After swapping :\n str1 = %s, str2 = %s\n",ptr1,ptr2);
    return 0;
}

