#include <stdio.h>

int main()
{
    int sum[8];
    int* p1;
    int** p2;
    printf("请输入8个整数:");
    for(p1=sum;p1-sum<8;p1++)
    {
        p2=&p1;
        scanf("%d",*p2);
    }
    printf("数组中的偶数为:\n");
    int n=0;
    for(p1=sum;p1-sum<8;p1++)
    {
         p2=&p1;                    
         if(**p2%2==0)
         {
              printf("%5d",**p2);            
              n++;
         }   
    }     
    printf("\n");
    printf("数组中偶数的个数:%d\n",n);      
    system("pause");
    return 0;
} 
