#include<stdio.h>
#include<stdbool.h>

bool judge(int num)
{
    if(num==1)  return false;
    for(int i=2;i*i<=num;i++){
        for(int j=i;j<num;j++){
            if(i*j==num)    return false;
        }
    }
    return true;
}

int main()
{
    //如何判断一个数是不是素数？
    int num;
    scanf("%d",&num);
    if(judge(num))  printf("%d is a prime.\n",num);
    else    printf("%d is not a prime.\n",num);
    return 0;
}