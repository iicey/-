#include <stdio.h>

int main()
{
    //int a=1&&0;
    int a=1&&12;
    printf("�����:%d\n",a);
    
    int c=!a;
    printf("�����:%d\n",c);
    
    int b=3;
    if(b!=3 && a==1)
    {
        printf("���Ϊ��\n");
    }
    else
    {
        printf("���Ϊ��\n");
    }
    return 0;
}
