// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     double a, result;

//     printf("Enter a: ");
//     scanf("%lf",&a);

//     if(a<0)
//     {
//         printf("\"Invalid Input ...Provide a positive number\"");
//     }else
//     {
//         result = sqrt(a);
//         printf("The square root of the %.2f is: %.2f",a,result);
//     }


//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);  // Use %lf for double

    if (number < 0) {
        printf("Error: Negative number entered. Square root of negative numbers is not real.\n");
    } else {
        result = sqrt(number);  // Compute the square root
        printf("The square root of %.2f is %.2f\n", number, result);  // Display the result
    }

    return 0;
}
