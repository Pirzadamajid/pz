#include <stdio.h>

int main() {
    float base, height, side;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    printf("Enter side length: ");
    scanf("%f", &side);

    float area = base * height;
    float perimeter = 2 * (base + side);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}