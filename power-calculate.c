#include<stdio.h>
int main()
{
    double base, exponent, result=1, i;

    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter Exponent : ");
    scanf("%lf",&exponent);

    for(i=1; i<=exponent; i++)
    {
        result = result * base;
    }

    printf("The result is = %.lf",result);

    getch();
    return 0;
}

