// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     double a;
    
//     printf("Enter the a: ");
//     scanf("%lf",&a);

//     double n;

//     printf("Enter the n: ");
//     scanf("%lf",&n);

//     printf("%lf",pow(a,n));
    
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);

    return 0;
}