#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character = ");
    ch = getche();

    printf("\n\n ASCII Value of %c is = %d .", ch, ch);
    printf("\n\n ASCII Value of %c is = %x .", ch, ch);
    printf("\n\n ASCII Value of %c is = %o .", ch, ch);

    getch();
    return 0;
}
