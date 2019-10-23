#include <stdio.h>

//条件编译   #ifdef
//#define num 24
//int num=40;

int main(int argc,char** argv)
{
    #ifdef num
           printf("已经进行了宏定义了！\n");
    #else
         #define num 40
         printf("还没有进行了宏定义了！\n");
         #ifdef num
                printf("已经定义\n");
         #endif
    #endif 
    system("pause");
    return 0;    
} 
