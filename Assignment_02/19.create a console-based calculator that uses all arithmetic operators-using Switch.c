#include<stdio.h>
#include<conio.h>

int main()
{
    char Opr = 0;
    int No1 = 0, No2 = 0;

    printf("\n Enter an Operation : ");
    scanf("%c", &Opr);

    switch(Opr)
    {
        case '+':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    printf("\n\n Addition of %d + %d = %d.", No1, No2, (No1 + No2));

                    break;

        case '-':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    printf("\n\n Subtraction of %d - %d = %d.", No1, No2, (No1 - No2));

                    break;

        case '*':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    printf("\n\n Multiplication of %d * %d = %d.", No1, No2, (No1 * No2));

                    break;

        case '/':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    printf("\n\n Division of %d / %d = %d.", No1, No2, (No1 / No2));

                    break;

        case '%':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&No1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&No2);

                    printf("\n\n Remainder of %d %% %d = %d.", No1, No2, (No1 % No2));

                    break;

        default:
                    printf("\n\n Invalid Symbol/Operator!!!");
                    break;
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
