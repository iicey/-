#include <stdio.h>
#include "Untitled2.h" 


//不带参数的宏定义 
#define PI 3.14 //#define 宏名 字符串 

//带参数的宏定义 
#define add(x,y) ((x)+(y))

int main(int argc,char** argv)
{
    printf("%f\n",PI); 
    #undef PI
    printf("%d\n",add(20*3,70%2)); 
    #undef add(x,y)
    printf("%s\n",TEXT);
    #undef TEXT
    system("pause");
    return 0;    
} 
