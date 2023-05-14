#include<stdio.h>
#include<ctype.h>
#define SPACE ' '
int main()
{
    char ch;

    // ch=getchar();
    while((ch=getchar())!='\n')
    {
        // if(ch==SPACE)   putchar(ch);
        if(isalpha(ch)) putchar(ch);
        else    putchar(ch+1);
        // ch=getchar();
    }
    putchar(ch);
    
    return 0;
}