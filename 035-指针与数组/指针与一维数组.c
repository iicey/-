#include <stdio.h> 

int main()
{
    int sum[4];
    int* p;
    p=sum;//�ȼ���p=&sum[0];
    printf("������4����������:");
    int i;
    for(i=0;i<4;i++)
    {
         //scanf("%d",&sum[i]);  
         scanf("%d",p++);          
    }
    p=sum;
    for(i=0;i<4;i++)
    {
        //printf("%d\n",sum[i]); //sum+i��ʾ����Ԫ�صĵ�ַ 
        //printf("%d\n",*(p+i)); 
        //printf("%d\n",*(sum+i)); //*(sum+i)��ʾ����Ԫ��
        printf("%d\n",*p++); //"++"��"--"           
    }
    return 0;
}
