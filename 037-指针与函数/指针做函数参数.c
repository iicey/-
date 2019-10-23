#include <stdio.h>

/*****功能:交换两变量的值******/
//2.按地址传递 
void swap(int* a,int* b)
{
      int tmp;
      tmp=*a;
      *a=*b; 
      *b=tmp;
}


//1.按值传递
//源文件中定义的变量就是全局变量 
//int a=12;
//int b=90;
//void swap()
//{
//      int tmp;
//      tmp=a;
//      a=b; 
//      b=tmp;   
//}

//值的传递方式:
// 1.按值传递
// 2.按地址传递 

int main()
{
    int a=12;
    int b=90;
    int *p1,*p2;//定义指针 
    p1=&a;//错误方式:int* p1=3; int* p2=a; 
    p2=&b; 
    swap(p1,p2);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}    
