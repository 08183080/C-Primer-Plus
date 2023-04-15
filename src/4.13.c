// print()返回打印的个数
#include<stdio.h>
int main()
{
    int bph2o=212;
    int rv;
    rv=printf("%d F is water's boiling point.\n",bph2o);
    printf("The printf() function printed %d \
    characters.\n",rv);
    return 0;
}