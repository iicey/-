#include <stdio.h>

void order(int* p,int n)//n:��ʾ����ĳ��� 
{
     int i,j;
     int k; 
     for(i=0;i<n-1;i++)
     {
       for(j=0;j<n-1-i;j++)
       {
             if(*(p+j)>*(p+j+1))
             {
                  k=*(p+j);//k=a; 
                  *(p+j)=*(p+j+1);//a=b;
                  *(p+j+1)=k;  //b=k;            
             }              
       }            
     }
     printf("����������Ϊ:");
     for(i=0;i<n;i++)
     {
          if(i%5==0)
              printf("\n");
          printf("%4d",*(p+i));    
     }
     
     printf("\n");
}


int main()
{
    int n;
    printf("����������Ԫ�صĸ���:");
    scanf("%d",&n);
    
    int sum[n];
    printf("���������Ԫ��:");
    int i;
    for(i=0;i<n;i++)
    {
        //scanf("%d",sum+i);
        scanf("%d",&sum[i]);  
    }
    order(sum,n);//ʵ��ð������ 
    system("pause");
    return 0;
}
