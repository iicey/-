#include <stdio.h> 

int main()
{
    int i=10;
    int* p1;//一级指针 
    int** p2;//二级指针
    p1=&i;
    printf("%d\n",p1);
    printf("%d\n",*p1);
    printf("-----------------------------\n");
    p2=&p1;
    printf("%d\n",p2);
    printf("%d\n",*p2);
    printf("%d\n",**p2);
    printf("------------------------------\n");
    char** p;//二级指针
    char* month[]={"float","double","byte","char","short","int","long"};
    for(i=0;i<7;i++)
    {
         p=month+i;
         printf("%s\n",*p);
         printf("%c\n",**p);           
    } 
    printf("--------------------------------\n");
    //作业:定义一个一维数组，使用指向指针的指针输出一维数组中是偶数的元素，并且统计偶数的个数！ 
    system("pause");
    return 0;    
}
