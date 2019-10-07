#include <stdio.h> 

int main()
{
    int sum[2][2];
    int* p;
    p=sum[0];//&sum[0]=>&sum[n]
    printf("请输入4个整型数字:");
    int i,j;
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
         {
              //scanf("%d",sum[i]+j);  
              scanf("%d",p++);            
         }      
    }
    p=sum[0];
    printf("\n-----------------------\n");
    for(i=0;i<2;i++)
    {
          for(j=0;j<2;j++)
          {
              //printf("%4d",*(sum[i]+j));  
              printf("%4d",*p++);          
          }
          printf("\n");          
    }
    system("pause");
    return 0;
}
