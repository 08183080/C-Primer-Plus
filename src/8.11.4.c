#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    int inword=0;
    int chcnt=0;
    int wordcnt=0;

    while ((ch=getchar())!=EOF)
    {
        if ( (inword==0) && !ispunct(ch) && ch!=' ' && ch!='\n')
        {
            chcnt++;
            inword=1;
        }
        else if((inword==1) && !ispunct(ch) && ch!=' ' && ch!='\n')
        {
            chcnt++;
        }else if((inword==1) && !ispunct(ch) && ch==' ' && ch!='\n')
        {
            inword=0;
            wordcnt++;
        }else if((inword==1) && ispunct(ch) && ch!='\n')
        {
            inword=0;
            wordcnt++;
        }
    }
    printf("words:%d\n",wordcnt);
    printf("chars:%d\n",chcnt);
    printf("average chars per word:%.2f\n",1.0*chcnt/wordcnt);
    return 0;
}