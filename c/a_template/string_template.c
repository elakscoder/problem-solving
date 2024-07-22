#include <stdio.h>

#define MAX_LIMIT 100

int main()
{

    char str[MAX_LIMIT];

    fgets(str, MAX_LIMIT, stdin);

    printf("%s", str);
 
   return 0;
}
