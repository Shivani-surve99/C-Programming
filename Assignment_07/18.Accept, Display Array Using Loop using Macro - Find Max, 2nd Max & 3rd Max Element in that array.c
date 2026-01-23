#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int Values[Size] = {}, i = 0, Max = 0, Max2 = 0, Max3 = 0, flag = -1;

    printf("\n Enter All Elements => \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Element No %d : ", i+1);
        scanf("%d",&Values[i]);

        if( Values[i] > Max )
        {
            Max = Values[i];
        }
    }

    for(i = 0; i < Size; i++)
    {
        if( Values[i] != Max )
        {
            if( (flag == -1) || ( Values[i] > Max2) )
            {
                   Max2 = Values[i];
            }
            flag = 1;
        }
    }

    for(i = 0; i < Size; i++)
    {
        if( (Values[i] != Max )&&( Values[i] != Max2)&&( Values[i] > Max3) )
        {
            if( (flag == -1) || ( Values[i] > Max3) )
            {
                   Max3 = Values[i];
            }
            flag = 1;
        }
    }

    getch();

    printf("\n\n =========================************************======================== \n");

    printf("\n Maximum => %d.",Max);

    printf("\n Second Maximum => %d.",Max2);

    printf("\n Third Maximum => %d.",Max3);

    getch();
    return 0;
}
