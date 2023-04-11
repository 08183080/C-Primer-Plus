// pizza.c 在比萨饼中使用已定义的常量
#include<stdio.h>
#include<limits.h>
#include<float.h>
#define PI 3.14159
int main(void)
{
    float area,circum,radius;

    const int MONTHS=12;//MONTHS在程序中不可更改，值为12
    // MONTHS=13;

    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circum=2.0*PI*radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %.2f,area=%.2f\n",circum,area);

    return 0;
}