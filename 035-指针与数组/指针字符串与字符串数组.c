#include <stdio.h>

int main(int argc,char **argv)
{
    //1.ָ���ַ��� 
    int i=0;
    printf("%d\n",&i);
    //һά����
    char sum[]="hello world!";
    printf("%s\n",sum);
    //ָ�� 
    char *str="hello world!";
    printf("%s\n",sum);



    //2.�ַ������� 
    //��ά����
    char tmp[2][10]={"hello","world"}; 
    char* string[]={"hello","world"};  
    printf("%c\n",tmp[0][0]); 
    printf("%s\n",tmp[0]); 
    printf("%s\n",string[1]); 
 
    system("pause");  
    return 0;
} 




