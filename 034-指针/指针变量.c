#include <stdio.h> 
#include <ctype.h> 

int main()
{
    printf("\n--------------------------\n");
    printf("ָ�������һ����ʽ\n");
    int* p; //int *p;
    
    printf("\n--------------------------\n");
    printf("ָ������ĸ�ֵ\n");
    //1.����ָ�������ͬʱ�ͽ��и�ֵ    
    int a;
    int* p=&a;
    //2.�ȶ���ָ������ٸ�ֵ 
    int b;
    int* q;
    q=&b;
     
    
    
    printf("\n--------------------------\n");
    printf("ָ�����������\n");//*ָ����� ���京��������ָ�������ָ���ֵ 
    char ch;
    char* p=&ch;
    printf("������һ���ַ�:");
    scanf("%c",p);
    *p=tolower(*p);
    printf("�ı����ַ�:%c\n",*p);

    
    
    printf("\n--------------------------\n");
    printf("&��*�����\n");
    char ch='w';
    char* p=&ch;
    char q=*p;
    printf("p=%d,q=%c",p,q);

    
    printf("\n---------------------\n");
    printf("&*��*&������\n");
    int a;
    int* p=&a;
    
    
    long i;
    long* p;
    printf("������һ����ֵ:");
    scanf("%ld",&i);
    p=&i; 
    printf("���&i���Ϊ:%ld\n",&i);
    //&*p�Ƚ���*���� ��*p�൱�ڱ���a;�ٽ���&���㣬&*p���൱��ȡ����a�ĵ�ַ
    printf("���&*p���Ϊ:%ld\n",&*p);
    //*&i�Ƚ���&���㣬&a����ȡ����a�ĵ�ַ��Ȼ�����*���㣬*&a���൱��ȡ����a���ڵ�ַ��ֵ 
    printf("���*&i���Ϊ:%ld\n",*&i);
    
    system("pause");
    return 0;
}
