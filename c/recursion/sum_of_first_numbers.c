#include <stdio.h>

int sum(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int ans = sum(n);

    printf("Sum of %d numbers is: %d", n, ans);

    return 0;
}