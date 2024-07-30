#include <stdio.h>
#define len 1000

int length(char *str)
{
    int cnt = 0;

    while (*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

void concat(int size, char *s1, char *s2)
{
    int i = 0;
    int j = size;

    while (s2[i] != '\0')
    {
        s1[j] = s2[i];
        i++;
        j++;
    }

    s1[j] = '\0';
}

void words(int n, char *ans)
{
    switch (n)
    {
    case 1:
        concat(length(ans), ans, "one ");
        break;
    case 2:
        concat(length(ans), ans, "two ");
        break;
    case 3:
        concat(length(ans), ans, "three ");
        break;
    case 4:
        concat(length(ans), ans, "four ");
        break;
    case 5:
        concat(length(ans), ans, "five ");
        break;
    case 6:
        concat(length(ans), ans, "six ");
        break;
    case 7:
        concat(length(ans), ans, "seven ");
        break;
    case 8:
        concat(length(ans), ans, "eight ");
        break;
    case 9:
        concat(length(ans), ans, "nine ");
        break;
    case 10:
        concat(length(ans), ans, "ten ");
        break;
    case 11:
        concat(length(ans), ans, "eleven ");
        break;
    case 12:
        concat(length(ans), ans, "twelve ");
        break;
    case 13:
        concat(length(ans), ans, "thirteen ");
        break;
    case 14:
        concat(length(ans), ans, "fourteen ");
        break;
    case 15:
        concat(length(ans), ans, "fifteen ");
        break;
    case 16:
        concat(length(ans), ans, "sixteen ");
        break;
    case 17:
        concat(length(ans), ans, "seventeen ");
        break;
    case 18:
        concat(length(ans), ans, "eighteen ");
        break;
    case 19:
        concat(length(ans), ans, "nineteen ");
        break;
    case 20:
        concat(length(ans), ans, "Twenty ");
        break;
    case 30:
        concat(length(ans), ans, "Thirty ");
        break;
    case 40:
        concat(length(ans), ans, "Forty ");
        break;
    case 50:
        concat(length(ans), ans, "Fifty ");
        break;
    case 60:
        concat(length(ans), ans, "Sixty ");
        break;
    case 70:
        concat(length(ans), ans, "Seventy ");
        break;
    case 80:
        concat(length(ans), ans, "Eighty ");
        break;
    case 90:
        concat(length(ans), ans, "Ninety ");
        break;
    case 100:
        concat(length(ans), ans, "hundrend and ");
        break;
    case 1000:
        concat(length(ans), ans, "thousand ");
        break;
    default:
        break;
    }
}

int count(int n)
{
    int cnt = 1;

    while (n)
    {
        n = n / 10;
        cnt = cnt * 10;
    }

    return cnt / 10;
}

void ntow(int n, char *ans)
{
    int num = count(n);
    int quo = 0;
    int rem = 0;
    while (n)
    {
        quo = n / num;
        n = n % num;
        if (num < 100)
        {
            words((quo * num), ans);
        }
        else
        {
            words(quo, ans);
            words(num, ans);
        }
        num = num / 10;
    }
}

int main()
{
    int n;
    char ans[len] = {0};

    printf("Enter n: ");
    scanf("%d", &n);

    ntow(n, ans);
    printf("The given number is: %d\n", n);
    printf("Number to words: %s", ans);

    return 0;
}