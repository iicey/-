#include <stdio.h>
/*******
 * 计算正方形的面积
 * 面积=宽*高
 * 作业:求长方形的面积，并且在手机或者模拟器中运行 
 *******/
int main()
{
    int h,s;
    printf("请输入正方形的的宽或者高:");
    scanf("%d",&h);
    s=h*h;
    printf("正方形的面积为:%d\n",s);
    return 0;
}
