#include <stdio.h>

int number;

int* per()
{
     int* p;
     p=&number;
     number=20;
     return p;
}

int main()
{
    int* p;
    p=per();
    printf("%d\n",*p);
    system("pause");
    return 0;
} 
