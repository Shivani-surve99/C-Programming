#include<stdio.h>
#include<conio.h>

int main()
{
    int Physics = 0, Chemistry = 0, Maths = 0;
    int Total = 0;
    float Percentage = 0;

    printf("\n Enter Physics Marks =");
    scanf("%d",&Physics);
    
    printf("\n Enter Chemistry Marks = ");
    scanf("%d",&Chemistry);
    
    printf("\n Enter Maths Marks = ");
    scanf("%d",&Maths);

    Total = Physics + Chemistry + Maths;
    
    Percentage = (float)Total/3.0;
    
    printf("\n Total of 3 Subjects is : %d + %d + %d = %d", Physics, Chemistry, Maths, Total);
    printf("\n Percentage is : %2d", Percentage);

    getch();
    return 0;
}

