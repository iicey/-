#include <stdio.h>

int main()
{
//    while(表达式)
//    {
//    
//    }
    int i=1;
    while(i<=4)  //表达式真才执行循环体 ，否则不执行    非零的值都为真，零为假 
    {
        printf("迁羽老师讲解while循环！\n");
        i++;
    }  
    //求1-50的和
    int j=1;
    int sum=0;
    while(j<=50)
    {
      sum+=j;//sum=sum+j   
      // printf("值:%d\n",sum);
       j++;
    }
    printf("1-50的和:%d\n",sum);
    system("pause");
    return 0;
} 
