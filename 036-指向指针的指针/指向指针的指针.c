#include <stdio.h> 

int main()
{
    int i=10;
    int* p1;//һ��ָ�� 
    int** p2;//����ָ��
    p1=&i;
    printf("%d\n",p1);
    printf("%d\n",*p1);
    printf("-----------------------------\n");
    p2=&p1;
    printf("%d\n",p2);
    printf("%d\n",*p2);
    printf("%d\n",**p2);
    printf("------------------------------\n");
    char** p;//����ָ��
    char* month[]={"float","double","byte","char","short","int","long"};
    for(i=0;i<7;i++)
    {
         p=month+i;
         printf("%s\n",*p);
         printf("%c\n",**p);           
    } 
    printf("--------------------------------\n");
    //��ҵ:����һ��һά���飬ʹ��ָ��ָ���ָ�����һά��������ż����Ԫ�أ�����ͳ��ż���ĸ����� 
    system("pause");
    return 0;    
}
