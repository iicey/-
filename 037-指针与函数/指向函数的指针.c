#include <stdio.h>

int gcd(int a)
{
    return 100*a;
}

/********
     ���庯��ָ��ĸ�ʽ:
        �������� (*ָ�������)(���������б�)��                   

**********/ 

int main()
{
    int (*p)(int);//���庯��ָ�� 
    p=gcd;
    int num=(*p)(10);
    printf("num=%d\n",num);
    return 0;
}
