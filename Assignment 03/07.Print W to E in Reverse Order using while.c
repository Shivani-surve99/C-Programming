#include <stdio.h>
#include<conio.h>
int main()
{
  char Alphabet = 'W';

  printf("\n OUTPUT is : \n");

  while(Alphabet >= 'E')
  {
     printf(" %c ", Alphabet);
     Alphabet--;
  }

  getch();
  return 0;
}
