#include<stdio.h>
#include<conio.h>

void Display(int No,int Frequency)
{
      int i=0;

      for(i=0;i<Frequency;i++)
       {
         printf("%d ",No);
       }

       return;
}

int main()
{
      int Value=0,Cnt=0;

      printf("Enter Number: ");
      scanf("%d",&Value);

      printf("\nEnter Frequency: ");
      scanf("%d",&Cnt);


      Display(Value,Cnt);

      getch();
      return 0;
}
