#include <stdio.h>

int main()
{
    int number;
    printf("请输入一个整数:");
    scanf("%d",&number);
    
    //1.单条件单分支的if语句 
    if(number>=0){ //条件为真才执行，否则不执行 
         printf("用户输入的数字为!%d\n",number);    
         printf("用户输入的数字为！%d\n",number);    
    }
    
    //2.单条件双分支的if语句
    if(number>0){ //条件为真才执行，否则不执行 
         printf("用户输入的正整数为%d！\n",number);     
    }else
    {
          printf("用户输入的是0或者是负整数为%d！\n",number);
    } 
    
    //3.多条件多分支的if语句
    if(number>0)
    {
          printf("用户输入的正整数为%d！\n",number); 
    }
    else if(number==0)
    {
         printf("用户输入的是0%d！\n",number);
    }
    else
    {
        printf("用户输入的是负整数为%d！\n",number);
    } 
    
    //4.if语句的嵌套
    if(number>=0){ 
         if(number>0)
         {
               printf("用户输入的正整数为%d！\n",number)      
         } 
         printf("用户输入的是0%d！\n",number);    
    }
    
    
    system("pause");
    return 0;
} 
