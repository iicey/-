#include <stdio.h>

//��������   #ifndef
//#define num 24
//int num=40;

int main(int argc,char** argv)
{
    #ifndef num
            printf("numδ�����壡\n");
    #else
         printf("num�Ѿ���������\n"); 
    #endif
    system("pause");
    return 0;    
} 
