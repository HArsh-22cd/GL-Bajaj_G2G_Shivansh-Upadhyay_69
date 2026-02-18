#include<stdio.h>
#include<math.h>
int main () {
    float P, R, T, SI, CI;
    printf("Enter Principle = ");
    scanf("%f",&P);
    printf("Enter Rate = ");
    scanf("%f",&R);
    printf("Enter Time = ");
    scanf("%f",&T);
    SI = (P*R*T)/100;
    CI = (1+pow(1/100,T));
    printf("SI = %f\n", SI);
    printf("CI = %f", CI);
return 0;
}