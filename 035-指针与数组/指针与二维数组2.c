#include <stdio.h> 

int main()
{
    int sum[2][2];
    int (*p)[2];
    p=&sum[0];
    printf("������4����������:");
    int i,j;
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
         {
             scanf("%d",(*(p+i))+j); 
         }
    }
    for(i=0;i<2;i++)
    {
         for(j=0;j<2;j++)
         {
         	 printf("%d\n",(*(*(p+i))+j)); 
             printf("%d\n",(*(p+i))+j); 
             printf("%d\n",(*(p+i))); 
             printf("%d\n",*(p+i)); 
             printf("%d\n",*p); 
             printf("---------\n");
         }
    }
//    printf("%d\n", p);
//    printf("%d\n", (*p)[2]);
//    p=&sum[0]; 
//    printf("\n-----------------------\n");
//    printf("��һ�е�Ԫ��Ϊ:\n");
//    for(j=0;j<2;j++)
//        printf("%5d",*((*p)+j));
//    printf("\n");         
    return 0;
}
