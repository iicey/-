#include <stdio.h>

int gcd(int a)
{
    return 100*a;
}

/********
     定义函数指针的格式:
        数据类型 (*指针变量名)(函数参数列表)；                   

**********/ 

int main()
{
    int (*p)(int);//定义函数指针 
    p=gcd;
    int num=(*p)(10);
    printf("num=%d\n",num);
    return 0;
}
