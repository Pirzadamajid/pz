#include <stdio.h>
#include <math.h>

int main() {
    float side;
    printf("Enter side: ");
    scanf("%f", &side);

    float area = ((3 * sqrt(3)) / 2) * side * side;
    float perimeter = 6 * side;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}