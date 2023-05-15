#include<stdio.h>
int main()
{
    int digits[10];
    float rates[6];
    int mat[3][5];
    char * psa[20];
    char (*pstr)[20];

    int num[6]={1,2,4,8,116,32};
    
    int a[6]={[3]=4};   //声明第3个元素值为4,C99新特性
    printf("%d\n",a[3]);
    
    int b[100]={[99]=-1};
    int c[100]={[5]=101,[10]=101,[11]=101,[12]=101,[13]=101};

    return 0;    
}