#include <stdio.h>

int main() {
    float a, b, height, side1, side2;
    printf("Enter bases a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter non-parallel sides: ");
    scanf("%f %f", &side1, &side2);

    float area = 0.5 * (a + b) * height;
    float perimeter = a + b + side1 + side2;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}