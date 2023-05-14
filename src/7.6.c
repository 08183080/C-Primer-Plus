#include<stdio.h>
#define PERIOD '.'
int main()
{
    char ch=0;
    int charcount=0;

    while ((ch=getchar())!=PERIOD)
    {
        if((ch!='\'')&&(ch!='\"'))
        {
            charcount++;
        }
    }
    printf("%d\n",charcount);
    return 0;
}