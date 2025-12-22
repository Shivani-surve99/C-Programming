#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float No = 0.0, Sq_Root = 0.0;

    printf("\n Enter a Number = ");
    scanf("%f",&No);

    Sq_Root = sqrt(No);

    printf("\n SquareRoot of Given Number is : %f.", Sq_Root);

    getch();
    return 0;
}
