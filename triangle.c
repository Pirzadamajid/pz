#include <stdio.h>

int main() {
    float a, b, c, s, area;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    float perimeter = a + b + c;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}