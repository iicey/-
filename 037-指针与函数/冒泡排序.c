#include <stdio.h>

void order(int sum[],int n)//n:��ʾ����ĳ��� 
{
     int i,j;
     int k; 
     for(i=0;i<n-1;i++)
     {
       for(j=0;j<n-1-i;j++)
       {
             if(*(sum+j)>*(sum+j+1))
             {
                  k=*(sum+j);//k=a; 
                  *(sum+j)=*(sum+j+1);//a=b;
                  *(sum+j+1)=k;  //b=k;            
             }              
       }            
     }
     printf("����������Ϊ:");
     for(i=0;i<n;i++)
     {
          if(i%5==0)
              printf("\n");
          printf("%4d",*(sum+i));    
     }
     
     printf("\n");
}


int main()
{
    int n;
    printf("����������Ԫ�صĸ���:");
    scanf("%d",&n);
    
    int sum[n];
    int *p;
    p=sum;
    printf("���������Ԫ��:");
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",p++);  
    }
    p=sum;
    order(p,n);//ʵ��ð������ 
    system("pause");
    return 0;
}
