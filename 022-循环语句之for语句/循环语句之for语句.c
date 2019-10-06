#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        printf("数值是:%d\n",i);     
        break;         
    }
    
    //1.for语句中省略表达式1
    i=1;
    for(;i<=50;i++)
    {
        printf("数值是:%d\n",i);    
        break;          
    }
    
    //2.for语句中省略表达式2
    for(i=1;;i++)
    {
        printf("数值是:%d\n",i); 
        break;             
    }
    
    //3.for语句中省略表达式3
    for(i=1;i<=50;)
    {
        printf("数值是:%d\n",i);
        i++;   
        break;           
    }
    
    //4. 3个表达式都省略 
    i=1;
    for(;;)
    {
        printf("数值是:%d\n",i);   
        break;          
    }
    
    //输出随机数 
    for(i=1;i<=10;i++)
    {
     srand(i);
     printf("随机数%d是:%d\n",i,rand()); 
    }
    system("pause");
    return 0;
}
