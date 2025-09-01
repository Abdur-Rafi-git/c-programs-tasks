#include<stdio.h>
int main()
{

    //evaluation 2 task 1
    int n, pow;
    long long result = 1;

    printf("Enter base: ");
    scanf("%d", &n);
    printf("Enter exponent: ");
    scanf("%d", &pow);

    for (int i = 1; i <= pow; i++) {
        result *= n;
    }

    printf("%d^%d = %lld\n", n, pow, result);

    return 0;
}