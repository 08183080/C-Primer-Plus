#include<stdio.h>
int main()
{
    // 从命令行中读取输入文件,统计之!
    char ch;
    int cnt=0;
    while ((ch=getchar())!=EOF)
    {
        cnt++;
    }
    printf("The characters summed:%d\n",cnt);
    return 0;
}