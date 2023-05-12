#include<stdio.h>
int getmax(int,int,int);    // 3个数据中的最大值
                            // 如何get 100个数据中的最大值呢？排序一下
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=getmax(a,b,c);
    printf("%d\n",max);
    return 0;
}

// int getmax(int a,int b,int c)
// {
//     if(a>=b && a>=c){
//         return a;
//     }else if(b>=a && b>=c){
//         return b;
//     }else if(c>=a && c>=b){
//         return c;
//     }
// }

int getmax(int a,int b,int c)
{
    int max=a;
    if(b>=max)  max=b;
    if(c>=max)  max=c;
    return max;
}