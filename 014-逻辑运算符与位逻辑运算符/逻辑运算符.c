#include <stdio.h>

int main()
{
    //int a=1&&0;
    int a=1&&12;
    printf("结果是:%d\n",a);
    
    int c=!a;
    printf("结果是:%d\n",c);
    
    int b=3;
    if(b!=3 && a==1)
    {
        printf("结果为真\n");
    }
    else
    {
        printf("结果为假\n");
    }
    return 0;
}
