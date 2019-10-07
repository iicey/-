#include <stdio.h>

int main()
{
    //1.声明两个字符数组 
    char str[5]="abcde";
    char rstr[5];
    int size=sizeof(str);
    //printf("%d\n",size); 
    int i;
    for(i=0;i<5;i++)
    {
         rstr[size-i-1]=str[i];                
    }
    printf("反转后的字符串:%s\n",rstr);
    system("pause");
    return 0;
} 
