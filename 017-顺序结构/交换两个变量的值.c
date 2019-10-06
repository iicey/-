#include <stdio.h>

int main()
{
    int a,b,tmp;
    printf("请输入两个整数值:");
    scanf("%d %d",&a,&b);
    printf("交换前:a=%d,b=%d\n",a,b);
    tmp=a;
    a=b;
    b=tmp;
    printf("交换后:a=%d,b=%d\n",a,b);
    system("pause"); 
    return 0;
}
