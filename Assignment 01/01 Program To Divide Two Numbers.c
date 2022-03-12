#include<stdio.h>
#include<conio.h>


int Divide(int No1,int No2)
{
      int Ans=0;

      if(No2>No1)
      {
        return -1;
      }

      Ans=No1/No2;

      return Ans;

}

int main()
{
      int Value1=15,Value2=5,Ret=0;

       Ret=Divide(Value1,Value2);

       printf("Division is %d\n",Ret);

       getch();
       return 0;
}
