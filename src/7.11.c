#include<stdio.h>
int main()
{
    char ch;
    while(scanf("%c",&ch)==1)
    {
        //getchar()
        char cc=getchar();//读取输入缓冲区的一个字符
        // printf("%c",ch);
        putchar(cc);
        switch (ch)
        {
        case 'a':
            printf("apple\n");
            break;
        case 'b':
            printf("banana\n");
            break;
        case 'c':
            printf("cat\n");
            break;
        default:
            printf("default\n");
            break;
        }
    }
}