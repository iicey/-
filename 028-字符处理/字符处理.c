#include <stdio.h>
#include <string.h> 

int main()
{
    //printf("�������ַ�����\n");
    //puts("�������ַ���:"); 
    //char ch[10];
    //scanf("%s",&ch);
    //gets(ch);
    //puts(ch);
    char ch1[30]="ͬѧ�����Ϻã�"; 
    char ch2[30]="����Ŀ������ַ�����"; 
    //1.���� 
    //strcpy(ch1,ch2); 
    puts(ch1);
    //2.����
    strcat(ch1,ch2);
    puts(ch1);
    
    char ch3[10]="ab";
    char ch4[10]="abcde"; 
    //3.�Ƚ�
    if(!strcmp(ch3,ch4))
    {
        puts("���"); 
        printf("%d\n",strcmp(ch3,ch4));            
    }
    else
    {
        printf("%d\n",strcmp(ch3,ch4)); 
        puts("�����"); 
    } 
    strupr(ch3);
    puts(ch3);
    strlwr(ch3);
    puts(ch3);
    printf("%d\n",strlen(ch3));
    system("pause");
    return 0;
}
