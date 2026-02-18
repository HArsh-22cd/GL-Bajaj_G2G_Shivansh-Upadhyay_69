#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("The swaped variables are a : %d and b : %d",a,b);
    return 0;
}