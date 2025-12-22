#include<stdio.h>
#include<conio.h>

int main()
{
    float KMs = 0.0, Mtrs = 0.0;

    printf("\n\n Enter Distance to convert Kilometer to Meter : ");
    scanf("%f",&KMs);

    Mtrs = KMs * 1000;

    printf("\n\n %f Kilometer = %0.2f Meter ",KMs, Mtrs);

    getch();
    return 0;
}
