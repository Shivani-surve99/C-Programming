#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 1, No = 0;

    printf("\n Enter a Number To Print it's Table : ");
    scanf("%d",&No);

    printf("\n Table of %d is : \n\n",No);

    while( Cnt <= 10 )
    {
        printf("\n %2d * %2d = %3d",No, Cnt, (No * Cnt) );
        Cnt++;
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
