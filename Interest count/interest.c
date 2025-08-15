#include<stdio.h>
int main()
{

double p,r,t;

printf("Input principle to find interest = ");
scanf("%lf", &p);

printf("Input interest rate to find interest = ");
scanf("%lf", &r);

printf("Input time to find interest = ");
scanf("%lf", &t);

double i=(p*(double)(r/100)*t);
printf("Interest is = %.3lf", i);


    return 0;
}