#include <stdio.h> 

int main()
{
    char c;//����һ��char���͵ı���c
    c=getchar();
    //putchar('\n');
    //printf("��������ַ���%c\n",c); 
    putchar(c);
    putchar('\n');
    getchar();
    putchar(getchar());
    putchar('\n');
    system("pause");
}
