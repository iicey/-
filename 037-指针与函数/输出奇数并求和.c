#include <stdio.h>

void num_sum(int* p,int n)
{
     int i;
     int sum;
     printf("数组中的奇数为:\n");
     for(i=0;i<n;i++)
     {
          if(*(p+i)%2!=0)
          {
               printf("%5d",*(p+i)); 
               sum=sum+*(p+i);         
          } 
     }
     printf("\n");
     printf("奇数的和为:%d\n",sum);      
}

int main()
{
    int sum[10];
    int* p1;
    int** p2; 
    p1=sum;
    printf("请输入10个整数:");
    for(;p1-sum<10;p1++)
    {
         p2=&p1;             
         scanf("%d",*p2);
    }
    //p1=sum;
    num_sum(sum,10);//直接使用数组名作为函数的参数 
    system("pause");
    return 0;
} 
