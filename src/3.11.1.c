//  展示 整数上溢、浮点数上溢和浮点数下溢的例子
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    int x= INT_MAX;

    printf("x = %d\n",x);
    x=x+1;
    printf("x+1 = %d\n",x); //整数上溢，integer overflow

    float y=FLT_MAX;
    printf("y=%f\n",y);
    y=y*10.0;
    printf("y*10.0=%f\n",y);    //浮点数上溢


    float z=FLT_MIN;
    printf("z=%e\n",z);         //  C语言中%e输出，用于将浮点数以科学计数法的形式输出
    z=z/10.0;
    printf("z/10=%e\n",z);      //浮点数下溢
    
    return 0;
}