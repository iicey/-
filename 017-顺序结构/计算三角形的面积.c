#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float s,S;
    printf("请输入三角形的三条边:");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    S=(float)sqrt(s*(s-a)*(s-b)*(s-c));
    printf("三角形的面积为:%f\n",S);
    system("pause");
    return 0;  
} 
