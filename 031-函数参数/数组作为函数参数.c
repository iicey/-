#include <stdio.h>

//定义一个函数，实现求平均值的功能
//思路是先求和再平均值 
float average(float array[],int n)
{
      int i;
      float sum=0;//和 
      for(i=0;i<n;i++)
      {
          sum+=array[i];           
      }
      float aver=sum/n;//求平均值 
      return aver; 
} 

int main()
{
    float sum[5]={12,14,10,20,80};
    //float aver= average(sum,5);//求平均值
    printf("计算平均值:%f\n",aver);
    return 0;
} 

