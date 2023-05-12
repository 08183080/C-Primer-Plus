#include<stdio.h>
void display(char ch,int lines,int width);
int main()
{
    char ch;
    int lines,width;

    while ((ch=getchar())!='\n')
    {
        scanf("%d %d",&lines,&width);
        display(ch,lines,width);
        
        while (getchar()!='\n')
        {
            continue;
        }
    }

    return 0;
}

void display(char ch,int lines,int width)
{
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < width; j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}