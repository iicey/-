#include <stdio.h>

//����*������

int main(int argc,char** argv)
{
    int i;
    int* p;
//      short i;
//      short* p;//��*������ 
    printf("������һ����ֵ:");
    scanf("%d",&i);
    p=&i;
    printf("���p�Ľ��Ϊ:%d\n",p);
    //p++;
    p--;
    printf("���p++�Ľ��Ϊ:%d\n",p);
    system("pause");
    return 0;
} 
