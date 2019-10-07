#include <stdio.h>

void temp();

int num();

void info(char ch[]);


int main()
{
    //1.函数语句调用
    temp();

    //2.函数表达式调用
    printf("%d\n",num()*10);

    //3.函数参数调用
    char ch[]="hello world!";
    info(ch);

    return 0;
}

//递归调用
int i=0;
void temp()
{
     i++;
     printf("函数的调用\n");

     if(i<16)
     {
       temp();
     }

}

int num()
{
   return 20;
}

void info(char ch[])
{
     printf("%s\n",ch);
}








