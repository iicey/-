#include <stdio.h>

int main()
{
    int a,b;
    printf("输入两个整数:");
    scanf("%d,%d",&a,&b);
    //两个整数进行交换 
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
