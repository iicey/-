#include <stdio.h>

/*****����:������������ֵ******/
//2.����ַ���� 
void swap(int* a,int* b)
{
      int tmp;
      tmp=*a;
      *a=*b; 
      *b=tmp;
}


//1.��ֵ����
//Դ�ļ��ж���ı�������ȫ�ֱ��� 
//int a=12;
//int b=90;
//void swap()
//{
//      int tmp;
//      tmp=a;
//      a=b; 
//      b=tmp;   
//}

//ֵ�Ĵ��ݷ�ʽ:
// 1.��ֵ����
// 2.����ַ���� 

int main()
{
    int a=12;
    int b=90;
    int *p1,*p2;//����ָ�� 
    p1=&a;//����ʽ:int* p1=3; int* p2=a; 
    p2=&b; 
    swap(p1,p2);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}    
