#include <stdio.h>

int main()
{
    int sum[4];
    int* p;
    p=sum;//�ȼ���p=&sum[0];
    printf("������4����������:");
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
