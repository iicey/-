#include <stdio.h>


int main()
{
    //do
//    {
//       printf("��ӭ����������θ������ã�\n"); //ѭ���� 
//    }while(���ʽ);
    int i=1;
    do
    {
         if(i%2!=0)
         {
              printf("����:%d\n",i);
         }
         i++;
    }while(i<=20);  
    system("pause");
    return 0;
} 
