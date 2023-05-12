#include<stdio.h>
int main()
{
    char ch;
    int cnt=0;
    while ((ch=getchar())!='#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            cnt++;
            break;
        
        case '!':
            putchar(ch);
            putchar(ch);
            cnt++;
            break;

        default:
            putchar(ch);
            break;
        }
    }

    printf("\n%d\n",cnt);
    return 0;
}