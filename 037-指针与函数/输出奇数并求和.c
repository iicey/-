#include <stdio.h>

void num_sum(int* p,int n)
{
     int i;
     int sum;
     printf("�����е�����Ϊ:\n");
     for(i=0;i<n;i++)
     {
          if(*(p+i)%2!=0)
          {
               printf("%5d",*(p+i)); 
               sum=sum+*(p+i);         
          } 
     }
     printf("\n");
     printf("�����ĺ�Ϊ:%d\n",sum);      
}

int main()
{
    int sum[10];
    int* p1;
    int** p2; 
    p1=sum;
    printf("������10������:");
    for(;p1-sum<10;p1++)
    {
         p2=&p1;             
         scanf("%d",*p2);
    }
    //p1=sum;
    num_sum(sum,10);//ֱ��ʹ����������Ϊ�����Ĳ��� 
    system("pause");
    return 0;
} 
