#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 10;

    printf("\n Table of 15 : \n\n");

    while( Cnt >= 1 )
    {
        printf("\n %2d * %2d = %3d", 15, Cnt, (15 * Cnt) );
        Cnt--;
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
