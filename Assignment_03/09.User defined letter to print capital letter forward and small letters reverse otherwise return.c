#include<stdio.h>
#include<conio.h>

int main()
{
  char ch = '\0';

  printf("\n Enter a Letter :");
  ch = getche();

  printf("\n\n Output : \n\n");

  if(ch >= 'A' && ch <= 'Z')
  {
    while(ch <= 'Z')
    {
      printf(" %c ", ch);
      ch++;
    }
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    while(ch >= 'a')
    {
      printf(" %c ", ch);
      ch--;
    }
  }
  else
  {
    printf("\n Invalid Letter");
  }
  printf("\n\n ...Thank You...");

  getch();
  return 0;
}
