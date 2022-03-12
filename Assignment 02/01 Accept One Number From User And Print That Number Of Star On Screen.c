#include <stdio.h>
#include<conio.h>

void Display(int No)
{
      int Cnt=0;

        while(Cnt<No)
         {
             printf(" * ");
             Cnt++;
         }

        return;
}

int main()
{
      int Value=0;

      printf("Enter Number: ");
      scanf("%d",&Value);

      Display(Value);

      getch();
      return 0;
}
