#include <stdio.h>

int main()
{
//    while(���ʽ)
//    {
//    
//    }
    int i=1;
    while(i<=4)  //���ʽ���ִ��ѭ���� ������ִ��    �����ֵ��Ϊ�棬��Ϊ�� 
    {
        printf("Ǩ����ʦ����whileѭ����\n");
        i++;
    }  
    //��1-50�ĺ�
    int j=1;
    int sum=0;
    while(j<=50)
    {
      sum+=j;//sum=sum+j   
      // printf("ֵ:%d\n",sum);
       j++;
    }
    printf("1-50�ĺ�:%d\n",sum);
    system("pause");
    return 0;
} 
