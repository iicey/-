#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        printf("��ֵ��:%d\n",i);     
        break;         
    }
    
    //1.for�����ʡ�Ա��ʽ1
    i=1;
    for(;i<=50;i++)
    {
        printf("��ֵ��:%d\n",i);    
        break;          
    }
    
    //2.for�����ʡ�Ա��ʽ2
    for(i=1;;i++)
    {
        printf("��ֵ��:%d\n",i); 
        break;             
    }
    
    //3.for�����ʡ�Ա��ʽ3
    for(i=1;i<=50;)
    {
        printf("��ֵ��:%d\n",i);
        i++;   
        break;           
    }
    
    //4. 3�����ʽ��ʡ�� 
    i=1;
    for(;;)
    {
        printf("��ֵ��:%d\n",i);   
        break;          
    }
    
    //�������� 
    for(i=1;i<=10;i++)
    {
     srand(i);
     printf("�����%d��:%d\n",i,rand()); 
    }
    system("pause");
    return 0;
}
