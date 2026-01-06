#include<stdio.h>
#include<conio.h>

int main()
{
    char sPT = '\0', ePT = '\0';

    printf("\n Enter Starting Letter :");
    sPT = getche();

    printf("\n Enter Ending Letter :");
    ePT = getche();

    printf("\n Output : \n\n");

    while(sPT <= ePT)
    {
        printf(" %c ", sPT);
        sPT++;
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
