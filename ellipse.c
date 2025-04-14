#include <stdio.h>
#define PI 3.1416

int main() {
    float a, b;
    printf("Enter semi-major (a) and semi-minor (b) axes: ");
    scanf("%f %f", &a, &b);

    float area = PI * a * b;
    float perimeter = 2 * PI * sqrt((a*a + b*b)/2); // Approximate

    printf("Area = %.2f\n", area);
    printf("Approx. Perimeter = %.2f\n", perimeter);

    return 0;
}