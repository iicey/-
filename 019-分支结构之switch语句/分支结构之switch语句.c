#include <stdio.h>

int main()
{
    char ch='a';
    printf("请选择你要进行的操作：");
    scanf("%c",&ch); 
    printf("------------------%c-------------------------\n",ch);
    switch(ch)
    {
         case 'a': 
              printf("手游辅助-迁羽老师\n");
              break;
         case 'b':
              printf("安卓逆向-迁羽老师\n");
              break; 
         case 'c':
              printf("易语言-易锦老师\n"); 
              break; 
         case 'd':
              printf("平面设计-\n");
              break; 
         default:
              printf("你输入的课程暂时还没有开，请重新输入！\n"); 
              break;
    } 
    printf("--------------------------------------------\n\n");
    system("pause");
    return 0;
}
