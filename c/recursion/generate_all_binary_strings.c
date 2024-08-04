#include <stdio.h>

void print(int start, int n, int subseq[], int size)
{
    if (size == n)
    {
        for (int i = 0; i < size; i++)
        {
            printf("%d", subseq[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < 2; i++)
    {

        if (i == 1 && subseq[size - 1] == 1)
        {
            return;
        }
        subseq[size] = i;
        print(i, n, subseq, size + 1);
    }
}

int main()
{
    int n;
    int subseq[100];

    printf("Enter n: ");
    scanf("%d", &n);

    print(0, n, subseq, 0);

    return 0;
}