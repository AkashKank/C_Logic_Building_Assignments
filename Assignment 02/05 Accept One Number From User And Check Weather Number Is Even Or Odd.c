#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkEven(int No)
{

        if(No%2==0)
         {
           return TRUE;
         }
        else
         {
           return FALSE;
         }

}

int main()
{
      int Value=0;
      BOOL bRet=FALSE;

      printf("Enter Number: ");
      scanf("%d",&Value);

      bRet=ChkEven(Value);

       if(bRet==TRUE)
        {
          printf("\n%d Is Even\n",Value);
        }
        else
        {
           printf("\n%d Is Odd\n",Value);
        }

      getch();
      return 0;
}
