#include <stdio.h>
int main()
{
    float r;
    float area , circumference;
    printf("Enter radius of circle = ");
    scanf("%f", &r);

    area = 3.14*r*r;
    circumference = 2*3.14*r;

    printf("The area of circle is %f",area);
    printf("The circumference of the circle is %f",circumference);
    return 0;
}