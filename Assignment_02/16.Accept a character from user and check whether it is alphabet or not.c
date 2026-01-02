#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Letter : ");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
    {
        ch = ch + 32;
        printf("\n\n Given Letter is a  Alphabet.");
    }
    else
    {

        printf("\n\n Given Letter is a Not Alphabet.");
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
