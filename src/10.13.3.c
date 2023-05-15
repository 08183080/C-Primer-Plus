#include<stdio.h>
int getmax(int a[],int n);

int main()
{
    int a[6]={2,3,6,4,5,9};
    int ans=getmax(a,6);
    printf("max: %d\n",ans);
    return 0;
}

int getmax(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)    max=a[i];
    }
    return max;
}