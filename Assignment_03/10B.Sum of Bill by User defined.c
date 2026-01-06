#include<stdio.h>
#include<conio.h>

int main()
{
  int Bill = 0, Cnt = 0, Bill_Sum = 0, Bill_Cnt = 0;

  printf("\n Enter how many Bills do you have :");
  scanf("%d",&Bill_Cnt);

  printf("\n Enter all %d Bills : \n", Bill_Cnt);

  for(Cnt = 1; Cnt <= Bill_Cnt; Cnt++)
  {
    printf("\n Enter Bill no %d :", Cnt);
    scanf("%d",&Bill);

    Bill_Sum = Bill + Bill_Sum;
  }

  printf("\n Sum of %d Bills is = %d.", Bill_Cnt, Bill_Sum);

  printf("\n\n Thank You, Visit Again.");

  getch();
  return 0;
}
