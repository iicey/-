#include <stdio.h> 

int main()
{
    int sum[2][2];
    int (*p)[2];
    p=&sum[0];
    printf("请输入4个整型数字:");
    int i,j;
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
         {
             scanf("%d",(*(p+i))+j); 
         }
    }
    p=&sum[0]; 
    printf("\n-----------------------\n");
    printf("第一行的元素为:\n");
    for(j=0;j<2;j++)
        printf("%5d",*((*p)+j));
    printf("\n");         
    system("pause");
    return 0;
}
