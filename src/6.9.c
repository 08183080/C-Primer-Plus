#include<stdio.h>
#include<stdbool.h>
int main()
{
    long num;
    long sum=0L;
    bool input_is_good;

    printf("请输入一个被求和的整数:");
    printf("(q to quit)");
    input_is_good=(scanf("%d",&num)==1);
    while (input_is_good)
    {
        sum=sum+num;
        printf("请输入下一个被求和的整数(q to quit):");
        input_is_good=(scanf("%ld",&num)==1);
    }
    printf("这些数字的累加和是%ld\n",sum);

    return 0;
}