#include <stdio.h>
#include <math.h>

int main()
    {
        double num1, result1, result2;
        printf("Input a digit to find its square and square root: ");
        scanf("%lf", &num1);
        result1 = (num1 * num1);
        result2 = sqrt(num1);
        printf("Square of the given number is %.2f \n", result1);
        printf("Square root of %.2lf is %.2f \n", num1, result2);
        return 0;
    }