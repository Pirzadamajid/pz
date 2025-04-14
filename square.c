#include <stdio.h>

int main() {
    float side;
    printf("Enter side of square: ");
    scanf("%f", &side);

    float area = side * side;
    float perimeter = 4 * side;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}