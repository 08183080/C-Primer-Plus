#include<stdio.h>
int fibonacci(int);
int fib_iter(int);//循环方法求斐波那契数
// https://www.bilibili.com/video/BV1cW4y1x7SB/?spm_id_from=333.337.search-card.all.click

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    return 0;
}

// 递归
int fibonacci(int n)
{
    if(n<=1)    return n;
    else    return fibonacci(n-1)+fibonacci(n-2);
}

// 循环
int fib_iter(int n)
{
    if(n<=1)    return n;
    else{
        int n1=0,n2=1,s=0;
        for(int i=2;i<=n;i++)//n-1次
        {
            s=n1+n2;
            n1=n2;
            n2=s;
        }
        return s;
    }
}