#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int i = 0, Max = 0, Max2 = 0, Value[Size] = {0}, flag = 0;


    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Value %d = ", (i+1) );
        scanf("%d",&Value[i]);

        if( (i == 0) || (Max < Value[i]) )
        {
            Max = Value[i];
        }
    }

    for( i = 0 ; i < Size ;  i++ )
    {
        if(Value[i] == Max)
        {
            continue;
        }

        if( (flag == 0) || (Max2 < Value[i]) )
        {
            Max2 = Value[i];
            flag = 1;
        }
    }

    getch();

    printf("\n\n =========================************************======================== \n");

    printf("\n Maximum => %d.", Max);

    printf("\n Second Maximum => %d.", Max2);

    getch();
    return 0;
}
