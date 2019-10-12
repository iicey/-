#include <stdio.h>

int main()
{
    int sum[4];
    int* p;
    p=sum;//等价于p=&sum[0];
    printf("请输入4个整型数字:");
	int i;
	for (i=0; i<4; i++)
	{
		scanf("%d\n", &sum[i]);
//		printf("%d\n", &sum[i]);
	}
	for (i=0; i<4; i++)
	{
		printf("%d\n", p);
		printf("%d\n", *(p+i));
		printf("%d\n", sum[i]);
		printf("%d\n", *(sum+i));
		printf("%d\n", sum+i);
		printf("-------------\n");
	}
    return 0;
}
