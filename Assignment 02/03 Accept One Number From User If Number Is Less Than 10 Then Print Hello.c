#include<stdio.h>
#include<conio.h>

void Display(int No)
{

        if(No<10)
         {
           printf("\n \tHello\n");
         }
        else
         {
           printf("\n \tHow Are You\n");
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
