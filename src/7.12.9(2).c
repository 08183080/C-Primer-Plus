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
    int num;
    int cnt;

    while (scanf("%d",&num) && num>0)
    {
        cnt = 0;
        for (int i = 1; i <= num ; i++)
        {
            if(judge(i))    cnt++;
        }
        printf("%d\n",cnt);
    }

    return 0;
}