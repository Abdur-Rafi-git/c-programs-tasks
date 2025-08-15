#include<stdio.h>
int main()
{
    double l;
    printf("input length in cm to convert =");
    scanf:("%lf", &l);

    /*
    Write a C program to input length in centimeter and convert it to 
    meter and kilometer. How to convert length from centimeter to meter and kilometer
     in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.
    */

    double km=l/100000;
    printf("\nthe km is= %lf", km);

    double m=l/100;
    printf("\nthe km is= %lf", m);


    return 0;
}