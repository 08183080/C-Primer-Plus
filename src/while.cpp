// 大话西游版while
#include<stdio.h>
#include<iostream>
#include<chrono>
using namespace std;

int main()
{
    int year=0;
    auto start=std::chrono::high_resolution_clock::now();   //获取程序的开始时间
    while(year>-500)
    {
        year--;
    }
    auto end=std::chrono::high_resolution_clock::now(); //获取程序的结束时间
    auto duration=std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
    cout<<"**     在花费了  "<<duration<<"ms的追寻之后           **\n";
    printf("**         恭喜你，来到了五百年前~       **\n");
    printf("** 接下来，你要去寻找那个给你三颗痣的人~ **\n");
    printf("**     你在睡梦中喊了紫霞仙子784次...   **\n");
    int i=0;
    while(i<7){
        printf("【至尊宝】：紫霞仙子！\n");
        i++;    //如果没有成长的话，就会一直死循环下去
    }
    return 0;
}