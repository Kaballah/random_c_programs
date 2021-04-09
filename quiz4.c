#include <stdio.h>
#include <math.h>

int main()
    {
        float rad, diam, area;
        printf("Input a radius: ");
        scanf("%f", &rad);
        diam = (rad + rad);
        area = 3.14159 * rad * rad;
        printf("Diameter of the circle: %.2f \n", diam);
        printf("Area of the circle: %.2f \n", area);
        return 0;
    }