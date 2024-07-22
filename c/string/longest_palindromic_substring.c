#include <stdio.h>
#define MAX 100

int Strsize(char *str) {
    int cnt = 0;
    while (*str != '\0') {
        cnt++;
        str++;
    }
    return cnt;
}

int length(int left,int right,int size,char* str,int *start,int *end,int c_max)
{
    int maxLength = c_max;

    while (right < size && left>= 0 && str[right] == str[left]) 
    {
        if(right - left + 1 > maxLength) 
        {
            *start = left;
            *end = right;
            maxLength = right - left + 1;   
        }
        --left;
        ++right;
            
    }

        return maxLength;

}

int palin(char *str, int *start, int *end) {
    int size = Strsize(str);
    int c_max = 1;

    *start = 0;
    *end = 0;

    for (int i = 0; i < size; ++i) 
    {
        c_max = length(i,i,size,str,start,end,c_max);
        c_max = length(i,i+1,size,str,start,end,c_max);
    }

    return c_max;

}

int main() {
    char str[MAX];
    int start, end;

    printf("Enter the string: ");
    scanf("%s", str);

    int length = palin(str, &start, &end);

    printf("Length of the longest palindrome is: %d\n", length);
    printf("Start index: %d, end index: %d\n", start, end);

    printf("Longest palindromic substring is: ");
    for (int i = start; i <= end; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
