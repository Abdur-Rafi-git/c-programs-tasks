#include<stdio.h>
int main()
{
    float C;
    printf("input temperature in C to convert in F = ");
    scanf("%f", &C);

    float F=((C*((float)9/5))+32);
    printf("\nTemperature in Fahrenheit %.3f", F);
    return 0;
}