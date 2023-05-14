// 编写一个可以统计单词的数量的程序
// I love you.
#include<stdio.h>
#define SPACE ' '
int main()
{
    char ch;
    int wordcount=0;
    int charcount=0;
    int linecount=0;
    while((ch=getchar())!='.')
    {
        if(ch==SPACE){
            wordcount++;
        }
        if(ch=='\n'){
            linecount++;
        }
        charcount++;
    }
    wordcount++;
    charcount++;
    printf("wordcount:%d\n",wordcount);
    printf("charcount:%d\n",charcount);
    printf("lincount :%d\n",linecount);
    return 0;
}