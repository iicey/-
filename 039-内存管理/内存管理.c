#include <stdio.h> 
#include <stdlib.h>

int main(int argc,char** argv)
{
    short* num=(short*)malloc(sizeof(short));//¶Ñ 
    float* number=realloc(num,sizeof(float));
    printf("%d,%d\n",num,number+1);
    *num=100;
    int* pArray;
    pArray=(int*)calloc(4,sizeof(int));
    pArray[0]=10;
    pArray[1]=100;
    pArray[2]=1000;
    pArray[3]=10000;
    int i;
    for(i=0;i<4;i++)
    {
          printf("%d\n",pArray[i]);          
    }
    //printf("%d,%d,%d",num,*num,sizeof(short));
    free(num); 
    free(pArray);
    return 0;
}
