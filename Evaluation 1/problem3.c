#include<stdio.h>
int main()
{

    // Writer a c program to find a number positive or not?

     int x;
    printf("input a number to find positive or negative");
    scanf("%d", &x);

    if (x > 0) {
        printf("Positive\n");
    } else if (x == 0) {
        printf("0 is Zero\n");
    } else {
        printf("Negative\n");
    }





    return 0;
}