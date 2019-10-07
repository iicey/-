#include <stdio.h> 
#include <ctype.h> 

int main()
{
    printf("\n--------------------------\n");
    printf("指针变量的一般形式\n");
    int* p; //int *p;
    
    printf("\n--------------------------\n");
    printf("指针变量的赋值\n");
    //1.定义指针变量的同时就进行赋值    
    int a;
    int* p=&a;
    //2.先定义指针变量再赋值 
    int b;
    int* q;
    q=&b;
     
    
    
    printf("\n--------------------------\n");
    printf("指针变量的引用\n");//*指针变量 ，其含义是引用指针变量所指向的值 
    char ch;
    char* p=&ch;
    printf("请输入一个字符:");
    scanf("%c",p);
    *p=tolower(*p);
    printf("改变后的字符:%c\n",*p);

    
    
    printf("\n--------------------------\n");
    printf("&和*运算符\n");
    char ch='w';
    char* p=&ch;
    char q=*p;
    printf("p=%d,q=%c",p,q);

    
    printf("\n---------------------\n");
    printf("&*和*&的区别\n");
    int a;
    int* p=&a;
    
    
    long i;
    long* p;
    printf("请输入一个数值:");
    scanf("%ld",&i);
    p=&i; 
    printf("输出&i结果为:%ld\n",&i);
    //&*p先进行*运算 ，*p相当于变量a;再进行&运算，&*p就相当于取变量a的地址
    printf("输出&*p结果为:%ld\n",&*p);
    //*&i先进行&运算，&a就是取变量a的地址，然后计算*运算，*&a就相当于取变量a所在地址的值 
    printf("输出*&i结果为:%ld\n",*&i);
    
    system("pause");
    return 0;
}
