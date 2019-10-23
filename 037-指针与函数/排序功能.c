#include <stdio.h>
//该函数的功能是交换两个变量值 
void swap(int* p1,int* p2)
{
     int temp;
     temp=*p1;
     *p1=*p2;
     *p2=temp;
}

//改函数的功能是进行排序 
void paix(int* p1,int* p2,int* p3)//指针变量作为形式参数 
{
     if(*p1<*p2)//*p1含义就是引用指针变量所指向的值 
         swap(p1,p2); 
     if(*p1<*p3)      
         swap(p1,p3);
     if(*p2<*p3)
         swap(p2,p3);       
}  

/***
    作业: 
    请输入十个整数，找出其中的奇数，并且进行求和！(使用指针来实现)
    定义一个数组来存放十个整型数据，让每一个数组元素%2，
    如果是偶数就等于0，反之是奇数。 

***/ 

//使用指针实现冒泡排序 

int main()
{
    int a,b,c;
    printf("请输入三个整数:");
    //int *p1,*p2,*p3; 
    int* p1;
    int* p2;
    int* p3;
    p1=&a;
    p2=&b;
    p3=&c;
    scanf("%d %d %d",p1,p2,p3);
    //scanf("%d %d %d",&a,p2,p3);
   
    printf("将三个整数从大到小进行排序:\n"); 
    paix(p1,p2,p3);//指针变量作为实参 
    //printf("%d %d %d\n",a,b,c);
    printf("%d %d %d\n",*p1,*p2,*p3);
    return 0; 
} 
