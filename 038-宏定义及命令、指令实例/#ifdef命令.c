#include <stdio.h>

//��������   #ifdef
//#define num 24
//int num=40;

int main(int argc,char** argv)
{
    #ifdef num
           printf("�Ѿ������˺궨���ˣ�\n");
    #else
         #define num 40
         printf("��û�н����˺궨���ˣ�\n");
         #ifdef num
                printf("�Ѿ�����\n");
         #endif
    #endif 
    system("pause");
    return 0;    
} 
