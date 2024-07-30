#include <stdio.h>
int cnt = 0;

void print()
{
    printf("%d ", cnt);
    cnt++;
    if (cnt == 5)
    {
        return;
    }
    print();
}

int main()
{
    print();

    return 0;
}