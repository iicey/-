#include <stdio.h>

int main()
{
    //1.单目运算符
    int a=-4;
    long b=2017;
    //long c=b+a;//算术表达式
    //long c=a-b;//-4-2017
    long c=b-a;//2017-(-4)
    printf("输出c的值:%d\n",c);

    //2.双目运算符
    int a2=10;
    double b2=3.14;
    double c2=a2/b2;
    printf("输出c的值:%f\n",c2);
    c2=5%2;
    printf("输出c的值:%f\n",c2);

    //3.三目运算符
    //求最小值
    int a3,b3;
    printf("请输入两个整数：");
    scanf("%d",&a3);
    scanf("%d",&b3);
    int c3=(a3<=b3)?a3:b3;
    printf("最小值:%d\n",c3);
    return 0;
}
