#include<stdio.h>
int getmax(int a[]);

int main()
{
    int a[300];
    int max=0;
    for(int i=0;i<300;i++){
        a[i]=i*i;
    }
    max=getmax(a);
    printf("%d\n",max);
    return 0;
}

int getmax(int a[])
{
    int max=a[0];
    for(int i=1;i<300;i++){
        if(a[i]>max)    max=a[i];
    }
    return max;
}