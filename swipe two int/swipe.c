#include<stdio.h>
int main()
{
int a,b,c;

printf("Enter the value of a ");
scanf("%d", &a);

printf("Enter the value of b ");
scanf("%d", &b);

c=a;
a=b;
b=c;

printf("\n value of a after swap %d", a);
printf("\n value of b after swap %d", b);
return 0;
}
