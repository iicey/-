#include <stdio.h>
#include <string.h>

int main()
{
    int result=1;
    
    int count=0;
    
    char ch[128]={'\0'};//�����ַ����� 
    char cryptograph[128]={'\0'};//�����ַ����� 
    
    int i;
    
    while(1)
    {  
          if(result==1)
          {
               printf("������Ҫ���ܵ�����:");
               scanf("%s",&ch);        
               count=strlen(ch);
               for(i=0;i<count;i++)
               {
                   cryptograph[i]=ch[i]+i+1;
               }
               cryptograph[i]='\0';
               //���������Ϣ 
               printf("���ܺ��������:%s\n",cryptograph); 
          }
          else if(result==2)
          {
              // count=strlen(ch); 
               for(i=0;i<count;i++)
               {
                     ch[i]= cryptograph[i]-i-1;             
               }
               ch[i]='\0';
               printf("���ܺ��������:%s\n",ch);
          }
          else if(result==3)
          {
               break;
          }
          else
          {
              printf("��������ȷ�����:\n");
          }  
          printf("��ѡ���Ӧ�Ĳ���:\n\t1.����\n\t2.����\n\t3.�˳�\n");
          printf("�����������:");
          scanf("%d",&result);//��ȡ���������� 
    }
    system("pause");
    return 0;    //������� 
}
