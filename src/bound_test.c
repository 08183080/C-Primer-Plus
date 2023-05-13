#include<stdio.h>
int main()
{
    int a[4];
    a[-1]=2;
    a[0]=22;
    a[1]=3;
    a[2]=9;
    a[3]=22;
    a[4]=456;
    for(int i=-1;i<=4;i++)  printf("%d\n",a[i]);
    return 0;    
}