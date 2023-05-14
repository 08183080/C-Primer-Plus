#include<stdio.h>
int main()
{
    char ch;
    int cnt=0;
    while ((ch=getchar())!='#')
    {
        if(cnt && cnt%8==0)    printf("\n");
        printf("%c:%d ",ch,(int)ch);
        cnt++;
    }
    return 0;
}
// 编写一个程序读取输入，读到#字符停止。
// 程序要打印每个输入的字符以及对应的ASCII码（十进制）。每行打印8个“字符-ASCII码”组合。建议：使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符。
