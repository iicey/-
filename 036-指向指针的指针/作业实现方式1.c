#include <stdio.h>

int main()
{
    int sum[8];
    int* p1;
    int** p2;
    printf("������8������:");
    int i;
    for(i=0;i<8;i++)
        scanf("%d",&sum[i]); 
    p1=sum;
    p2=&p1;
    printf("�����е�ż��Ϊ:\n");
    int n=0;
    for(i=0;i<8;i++)
    {
         if(*(*p2+i)%2==0)
         {
              printf("%5d",*(*p2+i));            
              n++;
         }   
    }     
    printf("\n");
    printf("������ż���ĸ���:%d\n",n);      
    system("pause");
    return 0;
} 
