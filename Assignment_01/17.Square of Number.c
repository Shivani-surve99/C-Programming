#include<stdio.h>
#include<conio.h>

int main()
{
    float No = 0.0, Sqr = 0.0;

    printf("\n Enter a Number = ");
    scanf("%f",&No);

    Sqr = No * No ;

    printf("\n Square of Given Number is : %0.2f.", Sqr);

    getch();
    return 0;
}
