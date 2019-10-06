#include <stdio.h>

int main()
{
    int a=1,b=1;
    a+=1; //a=a+1;   2
    a-=1; //a=a-1;   1
    a-=1; //a=a-1    0
    
    b*=2; //b=b*2;   2
    b/=2; //b=b/2;   1 
    printf("输出结果是:%d,%d",a,b);
    system("pause");
    return 0;
}
