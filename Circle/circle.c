#include<stdio.h>
int main()
{
    float rad;
    printf("input radius = ");
    scanf("%f",&rad);

    float d=2*rad;
    printf("\nThe diameter of the circle is %.3f", d);

    float cir=(2*3.14159*rad);
    printf("\nthe circumference of the circle is %.3f", cir);

    float a= (3.14159*(rad*rad));
    printf("\nthe area of the circle is %.3f", a);





    return 0;
}