#include <stdio.h>
#include <string.h> 

int main()
{
    //printf("请输入字符串！\n");
    //puts("请输入字符串:"); 
    //char ch[10];
    //scanf("%s",&ch);
    //gets(ch);
    //puts(ch);
    char ch1[30]="同学们晚上好！"; 
    char ch2[30]="今晚的课题是字符处理。"; 
    //1.复制 
    //strcpy(ch1,ch2); 
    puts(ch1);
    //2.连接
    strcat(ch1,ch2);
    puts(ch1);
    
    char ch3[10]="ab";
    char ch4[10]="abcde"; 
    //3.比较
    if(!strcmp(ch3,ch4))
    {
        puts("相等"); 
        printf("%d\n",strcmp(ch3,ch4));            
    }
    else
    {
        printf("%d\n",strcmp(ch3,ch4)); 
        puts("不相等"); 
    } 
    strupr(ch3);
    puts(ch3);
    strlwr(ch3);
    puts(ch3);
    printf("%d\n",strlen(ch3));
    system("pause");
    return 0;
}
