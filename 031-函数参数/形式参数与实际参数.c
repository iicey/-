#include <stdio.h>

//�����������ú����Ĺ����������ֵ
int max(int,int); 

int main()
{
    printf("���������������ֵ:%d\n",max(12,19));//�������12,19����ʵ��
    return 0;
} 

//����һ������
int max(int a,int b)//������Ĳ���a��b������ʽ���� 
{
    int temp=0;
    temp=a>b?a:b; 
    return temp;
} 
