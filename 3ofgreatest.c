#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter First Number = ");
    scanf("%d",&a);
     printf("Enter First Number = ");
    scanf("%d",&b);
     printf("Enter First Number = ");
    scanf("%d",&c);
    if(a>b&&b>c)
    printf("a is greatest");
    else if(b>a&&b>c)
    printf("b is greatest");
    else 
    printf("c is greatest");
    return 0;
}