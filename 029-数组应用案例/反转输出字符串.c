#include <stdio.h>

int main()
{
    //1.���������ַ����� 
    char str[5]="abcde";
    char rstr[5];
    int size=sizeof(str);
    //printf("%d\n",size); 
    int i;
    for(i=0;i<5;i++)
    {
         rstr[size-i-1]=str[i];                
    }
    printf("��ת����ַ���:%s\n",rstr);
    system("pause");
    return 0;
} 
