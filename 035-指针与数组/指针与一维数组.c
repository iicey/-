#include <stdio.h> 

int main()
{
    int sum[4];
    int* p;
    p=sum;//等价于p=&sum[0];
    printf("请输入4个整型数字:");
    int i;
    for(i=0;i<4;i++)
    {
         //scanf("%d",&sum[i]);  
         scanf("%d",p++);          
    }
    p=sum;
    for(i=0;i<4;i++)
    {
        //printf("%d\n",sum[i]); //sum+i表示数组元素的地址 
        //printf("%d\n",*(p+i)); 
        //printf("%d\n",*(sum+i)); //*(sum+i)表示数组元素
        printf("%d\n",*p++); //"++"与"--"           
    }
    return 0;
}
