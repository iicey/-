#include <stdio.h>

int main()
{
    int a,b,tmp;
    printf("��������������ֵ:");
    scanf("%d %d",&a,&b);
    printf("����ǰ:a=%d,b=%d\n",a,b);
    tmp=a;
    a=b;
    b=tmp;
    printf("������:a=%d,b=%d\n",a,b);
    system("pause"); 
    return 0;
}
