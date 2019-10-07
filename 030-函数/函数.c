#include <stdio.h>

void  info();  //声明一个函数 ,该函数的功能是打印一条消息 

float  max()//无参函数 
{
//     return 123.23;  
//     printf("+++++++++++");
       
}

int min(int a,int b)//有参函数 
{
    
}

int main(int argc,char **argv)//函数头 
{
    info();
    printf("--------------------\n"); 
    printf("%f\n",max());
    return 0;    
}

//函数的定义
void info()
{
     printf("生产笔记本电脑零件\n");
     //局部变量的声明
     //函数的可执行代码
     //注意:在函数体中 不能定义函数 
} 

 
