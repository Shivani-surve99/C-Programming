// Program For ASCII Table

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n\t ASCII TABLE => \n");

    while(No < 128)
    {
        printf("\n %d  =  %c ", No, No);
        No++;
    }

    getch();
    return 0;
}
