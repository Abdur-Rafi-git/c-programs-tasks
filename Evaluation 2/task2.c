#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    //task 2

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        if (i % 2 != 0) {
            sum += i;
        }
        i++;
    } while (i <= n);

    printf("Sum of odd numbers from 1 to %d = %d", n, sum);
    return 0;
}