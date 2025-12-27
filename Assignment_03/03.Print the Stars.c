#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0;

    printf("\n Enter a Count = ");
    scanf("%d",&Cnt);

    printf("\n ---------------------------------- \n\n");

    while( Cnt > 0 )
    {
        printf(" * ");
        Cnt--;
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
