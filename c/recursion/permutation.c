#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r)
{
    int i;
    if (l == r)
    {
        printf("%s\n", str);
    }
    else
    {
        for (i = l; i <= r; i++)
        {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i));
        }
    }
}
void generateSubsets(char *str, int start, int end, char *subset, int subsetLen)
{
    if (start > end)
    {
        subset[subsetLen] = '\0';
        if (subsetLen > 0)
        {
            permute(subset, 0, subsetLen - 1);
        }
        return;
    }

    generateSubsets(str, start + 1, end, subset, subsetLen);

    subset[subsetLen] = str[start];
    generateSubsets(str, start + 1, end, subset, subsetLen + 1);
}

int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    char subset[n + 1];

    generateSubsets(str, 0, n - 1, subset, 0);

    return 0;
}
