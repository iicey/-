#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float s,S;
    printf("�����������ε�������:");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    S=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("�����ε����Ϊ:%f\n",S);
    system("pause");
    return 0;  
} 
