#include<stdio.h>
int main()
{
    char ch;
    char prev;
    int cnt=0;
    while ((ch=getchar())!='#')
    {
        if(ch=='i' && prev=='e'){
            cnt++;
        }
        prev=ch;
    }
    printf("%d\n",cnt);
    return 0;
}