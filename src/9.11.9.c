// power.c -- 计算数的整数幂
#include <stdio.h>
double power(double n, int p);    // ANSI函数原型

int main(void)
{
     double x, xpow;
     int exp;

     printf("Enter a number and the positive integer power");
     printf(" to which\nthe number will be raised. Enter q");
     printf(" to quit.\n");
     while (scanf("%lf%d", &x, &exp) == 2)
     {
          xpow = power(x, exp);    // 函数调用
          printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
          printf("Enter next pair of numbers or q to quit.\n");
     }
     printf("Hope you enjoyed this power trip -- bye!\n");

     return 0;
}

double power(double n, int p)    // 函数定义
{
    double pow = 1;
    int i;

    if(n==0){
        printf("The powers of %lf is not defined,we think 1~\n",n);
        pow=1;
    }else if(p>0){
        // for(i=1;i<=p;i++)   pow *= n;
        pow=n*power(n,p-1);
    }else if(p<0){
        // for(i=1;i<=-p;i++)  pow *= (1.0/n);
        pow=(1/n)*power(1/n,-p-1);
    }else if(p==0)  pow=1;
     return pow;                // 返回pow的值
}