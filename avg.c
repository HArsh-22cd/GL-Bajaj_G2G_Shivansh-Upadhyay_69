#include<stdio.h>
#include<math.h>
int main () {
int a, b, c, d, e, sum;
float per;
printf("Enter marks of 1st subjects = ");
scanf("%d", &a);
printf("Enter marks of 2st subjects = ");
scanf("%d", &b);
printf("Enter marks of 3st subjects = ");
scanf("%d", &c);
printf("Enter marks of 4st subjects = ");
scanf("%d", &d);
printf("Enter marks of 5st subjects = ");
scanf("%d", &e);
sum = a+b+c+d+e;
per = sum/5;
printf("sum = %d\n",sum );
printf("per = %f",per );
return 0;
}