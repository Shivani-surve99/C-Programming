#include<stdio.h>
#include<conio.h>

int main()
{
    float No = 0.0, Cube = 0.0;

    printf("\n Enter a Number = ");
    scanf("%f",&No);

    Cube = No * No * No ;

    printf("\n Cube of Given Number is : %f.", Cube);

    getch();
    return 0;
}
