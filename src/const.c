#include<stdio.h>
#define MONTHS 12

int main()
{
    const double PI=3.14159;    //const常量
    const int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};   //常量数组

    int * p=days;
    p[2]=1;
    printf("%d\n",days[2]);

    // days[2]=30;    //这是错误的

    // 指向const的指针不能用于改变值
    double rates[5] = {88.99, 100.12, 59.45, 183.11, 340.5};
    const double * pd = rates;        // pd指向数组的首元素
    printf("%p\n",pd);

    // pd[2]=22.22;    //不能修改,直接报错hh
    pd++;
    printf("%p\n",pd);

    // 声明一个不能指向别处的指针
    double * const pc=rates;
    *pc=22;
    //pc=&rates[2]; //不阔以

    // 限制地死死地hhh
    // const double * const p=rates;

    return 0;
}