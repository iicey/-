#include <stdio.h>

int main(int argc,char **argv)
{
    //1.指针字符串 
    int i=0;
    printf("%d\n",&i);
    //一维数组
    char sum[]="hello world!";
    printf("%s\n",sum);
    //指针 
    char *str="hello world!";
    printf("%s\n",sum);



    //2.字符串数组 
    //二维数组
    char tmp[2][10]={"hello","world"}; 
    char* string[]={"hello","world"};  
    printf("%c\n",tmp[0][0]); 
    printf("%s\n",tmp[0]); 
    printf("%s\n",string[1]); 
 
    system("pause");  
    return 0;
} 




