#include <stdio.h>

//定义内部函数 
static char* getString(char* str)
{
       return str;
} 

static void showString(char* str)
{
       printf("%s\n",str);
}

//外部函数，可以在其他源文件当中使用 
extern int max(int a,int b)//等价于int max(int a,int b){} 
{

}

//全局变量 
int number; 

int main()
{
    //局部变量 
    int sum;//等价于auto int sum; 
    static double fag;
    return 0;
}
