#include <stdio.h> 

int main()
{
    char c;//声明一个char类型的变量c
    c=getchar();
    //putchar('\n');
    //printf("你输入的字符是%c\n",c); 
    putchar(c);
    putchar('\n');
    getchar();
    putchar(getchar());
    putchar('\n');
    system("pause");
}
