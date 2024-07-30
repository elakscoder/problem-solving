#include <stdio.h>

int main()
{
    int arr[4][5] = {{1, 2, -1, -4, -20},
                     {-8, -3, 4, 2, 1},
                     {3, 8, 10, 1, 3},
                     {-4, -1, 1, 7, -6}};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                for (int l = 0; l < 5; l++)
                {
                    sum = 0;
                    if (i < k && j < l)
                    {
                        for (int a = i; a <= k; a++)
                        {
                            for (int b = j; b <= l; b++)
                            {
                                printf("%d ", arr[a][b]);
                                sum += arr[a][b];
                            }
                            printf("\n");
                        }
                        printf("Sum: %d", sum);
                        printf("\n");
                    }
                }
            }
        }
    }
}