#include <stdio.h>

int main()
{
    int number;
    printf("������һ������:");
    scanf("%d",&number);
    
    //1.����������֧��if��� 
    if(number>=0){ //����Ϊ���ִ�У�����ִ�� 
         printf("�û����������Ϊ!%d\n",number);    
         printf("�û����������Ϊ��%d\n",number);    
    }
    
    //2.������˫��֧��if���
    if(number>0){ //����Ϊ���ִ�У�����ִ�� 
         printf("�û������������Ϊ%d��\n",number);     
    }else
    {
          printf("�û��������0�����Ǹ�����Ϊ%d��\n",number);
    } 
    
    //3.���������֧��if���
    if(number>0)
    {
          printf("�û������������Ϊ%d��\n",number); 
    }
    else if(number==0)
    {
         printf("�û��������0%d��\n",number);
    }
    else
    {
        printf("�û�������Ǹ�����Ϊ%d��\n",number);
    } 
    
    //4.if����Ƕ��
    if(number>=0){ 
         if(number>0)
         {
               printf("�û������������Ϊ%d��\n",number)      
         } 
         printf("�û��������0%d��\n",number);    
    }
    
    
    system("pause");
    return 0;
} 
