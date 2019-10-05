#include <stdio.h>

//求最大值 
int max(int a,int b)
{
    if(a>=b) //如果a大于等于成立，则返回a 
    {
        return a;    
    }
    else       //a<b; 则返回b      
    {
        return b;
    }
        
}

//求最小值
int min(int a,int b)
{
    if(a<=b)      //如果a小于等于b成立,则返回a 
    {
        return a;    
    }
    else       //a>b,则返回b 
    {
        return b;
    } 

} 

/**\
*作业:写该案例 ,使用三目运算符完成该案例 
*
**/
int main()
{
    /**
    *求最大值和最小值 
    */
    int a,b;
    printf("请输入两个整数:");
    scanf("%d,%d",&a,&b); 
    
    int c=max(a,b);
    printf("最大值:%d\n",c);
    
    int d=min(a,b);
    printf("最小值:%d\n",d); 
    system("pause");
    return 0;
} 
