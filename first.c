#include<stdio.h>
int main(void)
{
    double length,width,area,perimeter;

    printf("enter length:");
    scanf("%lf",&length);

    printf("enter width:");
    scanf("%lf",&width);

    area = length * width;
    perimeter = (length + width)*2;

    printf("Area : %lf\n",area);
    printf("Perimeter : %lf",perimeter);


}
