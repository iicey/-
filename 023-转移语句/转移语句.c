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
           //printf("ѭ������:%d\n",i);
           continue;
         }
         printf("ѭ������:%d\n",i);
         i++;  
    }
    printf("\n\n");
    int j=1,number,sum=0;
    printf("������һ��������:");
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
