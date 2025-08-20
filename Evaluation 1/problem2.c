#include <stdio.h>
int main()
{
    /*
    Suppose you have 500 tk, you have to buy a product cost of 350.80 tk,
    and later you got 200 tk from your brother.

    Write a C program where user can input the balance and finally can see
    how much money remain?
    */

    float a, c, r;
    printf("how much do you have?");
    scanf("%f", &a);
    printf("how much the product cost?");
    scanf("%f", &c);
    a = a - c;
    printf("how much your brother gave?");
    scanf("%f", &r);
    a = a + r;
    
    printf("now you have = %.2f\n", a);



    return 0;
}