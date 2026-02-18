#include <stdio.h>
int main()
{
    float r;
    printf("Enter radius of circle = ");
    scanf("%f", &r);
    float area , circumference;
    area = 3.14*r*r;
    circumference = 3.14*2*r;

    printf("The area of circle is %f\n",area);
    printf("The circumference of the circle is %f",circumference);
    return 0;
}
