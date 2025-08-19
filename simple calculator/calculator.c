#include<stdio.h>
int main()
{
    double x, y, result;

    printf("Enter two numbrers= ");
    scanf("%lf  %lf",  &x, &y);

    char ope;
    printf("Enter an operator (+, -, *, /):  ");
    scanf(" %c", &ope);

    switch(ope){
        case '+':
        result = x+y;
        printf("%.2lf + %.2lf = %.2lf\n", x,y,result);
        break;

        case '-':
        result = x-y;
        printf("%.2lf - %.2lf = %.2lf\n", x,y,result);
        break;

        case '*':
        result = x*y;
        printf("%.2lf * %.2lf = %.2lf\n", x,y,result);
        break;

        case '/':
        if(y != 0)
        {
            result  = x/y;
            printf("%.2lf / %.2lf = %.2lf\n", x,y,result);
        }
        else
        {
            printf("Math error");
        }
        break;

        default:
        printf("invalid operator");


    }


    return 0;
}