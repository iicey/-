#include <stdio.h>

//����һ��������ʵ����ƽ��ֵ�Ĺ���
//˼·���������ƽ��ֵ 
float average(float array[],int n)
{
      int i;
      float sum=0;//�� 
      for(i=0;i<n;i++)
      {
          sum+=array[i];           
      }
      float aver=sum/n;//��ƽ��ֵ 
      return aver; 
} 

int main()
{
    float sum[5]={12,14,10,20,80};
    //float aver= average(sum,5);//��ƽ��ֵ
    printf("����ƽ��ֵ:%f\n",aver);
    return 0;
} 

