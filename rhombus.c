#include <stdio.h>

int main() {
    float d1, d2, side;
    printf("Enter diagonals (d1 and d2): ");
    scanf("%f %f", &d1, &d2);
    printf("Enter side length: ");
    scanf("%f", &side);

    float area = (d1 * d2) / 2;
    float perimeter = 4 * side;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}