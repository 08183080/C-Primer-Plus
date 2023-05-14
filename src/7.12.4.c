#include<stdio.h>
int main()
{
    char ch;
    int cnt=0;
    while ((ch=getchar())!='#')
    {
        if(ch=='.'){
            // ch='!';
            putchar('!');
            cnt++;
        }else if(ch=='!'){
            // ch='!';
            putchar(ch);
            putchar(ch);
            cnt++;
        }else{
            putchar(ch);
        }
        
    }

    printf("\n%d\n",cnt);
    return 0;
}