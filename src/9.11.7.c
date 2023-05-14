#include<stdio.h>
#include<ctype.h>
int judgech(char ch);

int main()
{
    char ch;
    while ((ch=getchar())!=EOF)
    {
        int pos=judgech(ch);
        if(pos!=-1){
            printf("%c is an alpha,the pos of it in alphanet is:%d\n",ch,pos);
        }else{
            printf("%c is not an alpha.\n");
        }                
    }
    return 0;
}

int judgech(char ch)
{
    if(isalpha(ch)){
        return tolower(ch)-'a'+1;
    }else{
        return -1;
    }
}