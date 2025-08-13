#include<stdio.h>
int main()
{
    int days;
    printf("input a nuber of days to convert = ");
    scanf("%d",&days);

    int year=days/365;
    printf("there are %d year/s", year);

    int remndys=days%365;
    int month=remndys/30;
    printf("\nthere are %d month/s", month);

    int forwek=remndys%30;
    int week=forwek/7;
    printf("\nthere are %d week/s", week);

    int remday= forwek%7;
    printf("\nthere remains %d day/s", remday);


    
    return 0;
}