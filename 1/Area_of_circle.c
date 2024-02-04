#include <stdio.h>

int main()
{

    double radius, area;

    printf("Enter the radius of that circle : ");
    scanf("%lf", &radius);

    area = 3.141 * radius * radius;

    printf("the area of that circle is %lf", area);

    return 0;
}
