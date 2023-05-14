#include<stdio.h>
int main()
{
    char ch;
    int spacecnt=0;
    int newlinecnt=0;
    int otherword=0;
    while((ch=getchar())!='#')
    {
        if(ch==' ') spacecnt++; 
        else if(ch=='\n')   newlinecnt++;
        else otherword++;
    }
    printf("spacecnt:%d\n",spacecnt);
    printf("newlinecnt:%d\n",newlinecnt);
    printf("otherword:%d\n",otherword);
    return 0;
}
// 编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
