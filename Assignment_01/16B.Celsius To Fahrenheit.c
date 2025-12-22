#include<stdio.h>
#include<conio.h>

int main()
{
    float Cel = 0.0, Fah = 0.0;

    printf("\n Convert Celsius To Fahrenheit ");

    printf("\n\n Enter Temperature in Degree Celsius : ");
    scanf("%f",&Cel);

    Fah = (Cel * (9.0/5.0)) + 32 ;

    printf("\n\n Temperature in Degree Fahrenheit : %0.2f ",Fah,Cel);

    getch();
    return 0;
}
