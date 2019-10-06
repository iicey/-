#include <stdio.h>

int main()
{
    int i=1;
    while(i<=20)
    {
         if(i==11)
         {
           //break; 
           i++;
           //printf("循环次数:%d\n",i);
           continue;
         }
         printf("循环次数:%d\n",i);
         i++;  
    }
    printf("\n\n");
    int j=1,number,sum=0;
    printf("请输入一个正整数:");
    loop:scanf("%d",&number);
    if(j<=number)
    {
         sum+=j;//sum=sum+i; 
         printf("------%d-------->\n",j);
         j++;
         goto loop; 
         printf("==========>\n");   
    } 
    system("pause");
    return 0;
} 
