#include<stdio.h>
int main ()
{
    int a,b,c;
    char op;
    printf("Enter your operator = ");
    scanf(" %c",&op);
    printf("Enter First Number = ");
    scanf("%d",&a);
    printf("Enter Second Number = ");
    scanf("%d",&b);
    if(op=='+')
    {
        c=a+b;
        printf("%d",c);
    }
    else if(op=='-')
    {
        c=a-b;
        printf("%d",c);
    }
    else if(op=='*')
    {
        c=a*b;
        printf("%d",c);
    }
    else if(op=='/')
    {
        c=a/b;
        printf("%d",c);
    }
    else
    printf("SYNTAX ERROR");
    return 0 ;
}