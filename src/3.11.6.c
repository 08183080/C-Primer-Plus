#include<stdio.h>
int main()
{
    double quarts;
    printf("请输入水的夸克数: ");
    scanf("%lf",&quarts);
    double mass=quarts*950;
    double molecules=mass/3.0e-23;
    printf("水分子的数量约为:%e\n",molecules);
    return 0;
}