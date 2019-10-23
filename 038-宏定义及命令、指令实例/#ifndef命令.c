#include <stdio.h>

//条件编译   #ifndef
//#define num 24
//int num=40;

int main(int argc,char** argv)
{
    #ifndef num
            printf("num未被定义！\n");
    #else
         printf("num已经被定义了\n"); 
    #endif
    system("pause");
    return 0;    
} 
