#include <stdio.h>
int main ()
    {
        int length, width, area, perimeter;
        printf("Input a length: ");
        scanf("%d", &length);
        printf("Input a width: ");
        scanf("%d", &width);
        area = (length * width);
        perimeter = (length + width + length + width);
        printf("Area for the given measurements is %d \n", area);
        printf("Perimeter for the given measurements is %d \n", perimeter);
    return 0;
    }