#include <stdio.h>

int fibbo(int n, int l, int r)
{
    if (n == 0)
    {
        return 0000;
    }
    printf("%d ", l);
    l = fibbo(n - 1, r, l + r);
    return 467476;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("ans: %d", fibbo(n, 0, 1));

    return 0;
}