#include <stdio.h>

//�����ֵ 
int max(int a,int b)
{
    if(a>=b) //���a���ڵ��ڳ������򷵻�a 
    {
        return a;    
    }
    else       //a<b; �򷵻�b      
    {
        return b;
    }
        
}

//����Сֵ
int min(int a,int b)
{
    if(a<=b)      //���aС�ڵ���b����,�򷵻�a 
    {
        return a;    
    }
    else       //a>b,�򷵻�b 
    {
        return b;
    } 

} 

/**\
*��ҵ:д�ð��� ,ʹ����Ŀ�������ɸð��� 
*
**/
int main()
{
    /**
    *�����ֵ����Сֵ 
    */
    int a,b;
    printf("��������������:");
    scanf("%d,%d",&a,&b); 
    
    int c=max(a,b);
    printf("���ֵ:%d\n",c);
    
    int d=min(a,b);
    printf("��Сֵ:%d\n",d); 
    system("pause");
    return 0;
} 
