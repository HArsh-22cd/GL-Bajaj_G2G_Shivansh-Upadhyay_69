#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First Side = ");
    scanf("%d",&a);
    printf("Enter Second Side = ");
    scanf("%d",&b);
    printf("Enter Third Side = ");
    scanf("%d",&c);
    if(a==b&&b==c)
    printf("Triangle is Equilateral");
    else if(a!=b&&b==c)
    printf("Triangle is Scalene");
    else
    printf("Triangle is Isosceles");
    return 0;
}