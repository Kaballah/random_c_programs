#include <stdio.h>
int main()
    {
        int num1 = 100;
        int num2 = 50;
        int sum;
        sum = (num1 + num2);
        printf("Summation of %d ", num1);
        printf("and %d ", num2);
        printf("is %d \n", sum);

        int sub;
        sub = (num1 - num2);
        printf("Difference between %d ", num1);
        printf("and %d ", num2);
        printf("is %d \n", sub);

        double div;
        div = (num1 / num2);
        printf("Dividing  %d ", num1);
        printf("by %d, ", num2);
        printf("you get %.2d \n", div);

        int mult;
        mult = (num1 * num2);
        printf("Multiplying %d ", num1);
        printf("and %d, ", num2);
        printf("you get %d \n", mult);
        return 0;
    }