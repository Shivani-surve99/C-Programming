#include<stdio.h>
#include<conio.h>

int main()
{
    float Cel = 0.0, Fah = 0.0;

    printf("\n Convert Fahrenheit To Celsius ");

    printf("\n\n Enter Temperature in Degree Fahrenheit : ");
    scanf("%f",&Fah);

    Cel = (Fah - 32) * (5.0/9.0);

    printf("\n\n Temperature in Degree Celsius : %0.2f ",Cel,Fah);

    getch();
    return 0;
}
