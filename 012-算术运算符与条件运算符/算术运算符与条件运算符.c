#include <stdio.h>

int main()
{
    //1.��Ŀ�����
    int a=-4;
    long b=2017;
    //long c=b+a;//�������ʽ
    //long c=a-b;//-4-2017
    long c=b-a;//2017-(-4)
    printf("���c��ֵ:%d\n",c);

    //2.˫Ŀ�����
    int a2=10;
    double b2=3.14;
    double c2=a2/b2;
    printf("���c��ֵ:%f\n",c2);
    c2=5%2;
    printf("���c��ֵ:%f\n",c2);

    //3.��Ŀ�����
    //����Сֵ
    int a3,b3;
    printf("����������������");
    scanf("%d",&a3);
    scanf("%d",&b3);
    int c3=(a3<=b3)?a3:b3;
    printf("��Сֵ:%d\n",c3);
    return 0;
}
