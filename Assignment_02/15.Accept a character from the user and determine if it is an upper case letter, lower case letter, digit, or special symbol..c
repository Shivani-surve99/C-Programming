#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Letter = ");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n\n Given Letter is a UpperCase.");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n\n Given Letter is a LowerCase.");
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("\n\n Given Letter is a Digit.");
    }
    else
    {
        printf("\n\n The character is a Special Symbol..");
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
