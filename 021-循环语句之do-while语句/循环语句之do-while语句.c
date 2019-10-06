#include <stdio.h>


int main()
{
    //do
//    {
//       printf("欢迎大家来到手游辅助课堂！\n"); //循环体 
//    }while(表达式);
    int i=1;
    do
    {
         if(i%2!=0)
         {
              printf("奇数:%d\n",i);
         }
         i++;
    }while(i<=20);  
    system("pause");
    return 0;
} 
