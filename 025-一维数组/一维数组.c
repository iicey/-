#include <stdio.h>

/**
   声明一个数组存放10位同学的C语言成绩，计算10位同学的平均成绩以及最大值、最小值！ 
**/
int main()
{
    //定义一个int类型的数组，长度为10；
    int _sum[10]; //下标取值范围0-9 
    //数组的引用 
    _sum[0]=1;
    _sum[9]=12; 
    int i;
    for(i=0;i<10;i++)
    {
        break;             
        printf("数组元素下标为%d对应相应的元素%d\n",i,_sum[i]); 
    } 
    
    //在定义数组时直接对数组元素赋初值
    //float num[6]={1.2,7.3,4.5,8.9,9.01,12.5};//对数组中的元素全部初进行始化 
    //float num[6]={1.2,7.3,4.5,8.9};//对数组中的一部分元素进行初始化 
    float num[]={1.2,7.3,4.5,8.9,9.01};//不指定数组的元素个数
    for(i=0;i<6;i++)
    {
        printf("数组元素下标为%d对应相应的元素%f\n",i,num[i]); 
    } 
    system("pause");
    return 0;    
} 
