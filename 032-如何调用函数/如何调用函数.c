#include <stdio.h>

void temp();

int num();

void info(char ch[]);


int main()
{
    //1.����������
    temp();

    //2.�������ʽ����
    printf("%d\n",num()*10);

    //3.������������
    char ch[]="hello world!";
    info(ch);

    return 0;
}

//�ݹ����
int i=0;
void temp()
{
     i++;
     printf("�����ĵ���\n");

     if(i<16)
     {
       temp();
     }

}

int num()
{
   return 20;
}

void info(char ch[])
{
     printf("%s\n",ch);
}








