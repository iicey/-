#include <stdio.h>

int main()
{
    int a,b;
    printf("������������:");
    scanf("%d,%d",&a,&b);
    //�����������н��� 
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
