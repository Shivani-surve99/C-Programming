#include<stdio.h>
#include<conio.h>

int main()
{
    float KMs = 0.0, Mtrs = 0.0;

    printf("\n\n Enter Distance to convert Meter to kilometer : ");
    scanf("%f",&Mtrs);

    KMs = Mtrs / 1000;

    printf("\n\n %f Meter = %0.2f Kilometer ",Mtrs, KMs);

    getch();
    return 0;
}
