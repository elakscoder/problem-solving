#include <stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;
    while (*str)
    {
        cnt++;
        str++;
    }
    return cnt;
}

void pattern(char *str, int n, int rows)
{
    int cnt = 0;
    int col = 0;
    for (int i = 0; i < rows; i++)
    {
        col = 0;
        int j = i;
        cnt = 0;
        while (j < n)
        {
            /*  if (col % (rows - 1) == 0)
             {
                 printf("%c", str[j]);
                 j += (2 * rows) - 2 * (i + 1);
                 if ((2 * rows) - 2 * (i + 1) == 0)
                 {
                     j += 2 * rows - 2;
                 }
             } */
            if ((i == 0 || i == rows - 1) && (col % (rows - 1) == 0))
            {
                printf("%c", str[j]);
                j += (2 * rows) - 2;
            }
            else if (col % (rows - 1) == 0)
            {
                printf("%c", str[j]);
                j += (2 * rows) - 2 * (i + 1);
            }
            else if (col % (rows - 1) == (rows - 1) - i)
            {
                printf("%c", str[j]);
                j += 2 * i;
            }
            else
            {
                printf(" ");
            }
            col++;
        }
        printf("\n");
    }
}

int main()
{
    char str[len];
    int rows;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter rows: ");
    scanf("%d", &rows);

    int n = length(str);

    pattern(str, n, rows);

    return 0;
}