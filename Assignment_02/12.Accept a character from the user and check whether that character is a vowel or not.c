#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Letter = ");
    ch = getche();

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("\n\n Given Letter is a Vowel.");
    }
    else
    {
        printf("\n\n Given Letter is a Not Vowel.");
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
