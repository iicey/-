#include <stdio.h>

int main()
{
    char ch='a';
    printf("��ѡ����Ҫ���еĲ�����");
    scanf("%c",&ch); 
    printf("------------------%c-------------------------\n",ch);
    switch(ch)
    {
         case 'a': 
              printf("���θ���-Ǩ����ʦ\n");
              break;
         case 'b':
              printf("��׿����-Ǩ����ʦ\n");
              break; 
         case 'c':
              printf("������-�׽���ʦ\n"); 
              break; 
         case 'd':
              printf("ƽ�����-\n");
              break; 
         default:
              printf("������Ŀγ���ʱ��û�п������������룡\n"); 
              break;
    } 
    printf("--------------------------------------------\n\n");
    system("pause");
    return 0;
}
