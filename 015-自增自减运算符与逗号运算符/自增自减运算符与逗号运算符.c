#include <stdio.h>

int main()
{
    int a=4,b=4;
    a=++a;
    b=b++;
    printf("结果是:a=%d,b=%d\n",a,b);
    //a=2+5,4+5,5+5
    //不加括号：第一个表达式优先级最高
    //加括号：括号内最后一个表达式优先级最高，a=(2+5,4+5),5+5;
    a=(2+5,4+5,5+5);
    printf("结果是:%d\n",a);
    return 0;
}
