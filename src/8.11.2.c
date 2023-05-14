#include<stdio.h>
int main()
{
    char ch;
    int cnt=0;

    while ((ch=getchar())!=EOF && ch!='\n' && (cnt!=10))
    {
            if(ch=='\t')
            {
                printf("\t");
            }
            if(ch>31 && ch<127)
            {
                printf("%c:%d ",ch,ch);
            }
            else{
                if(ch>=1 && ch<=26 && ch!='\n' && ch!='\t')
                {
                    printf("^");
                    printf("%c",'A'+(int)ch-1);
                    printf(":");
                    printf("%d ",ch);
                }
                else{
                    switch (ch)
                    {
                        case 0:printf("^@:0 ");break;
                        case 27:printf("^[:27 ");break;
                        case 28:printf("^\:28 ");break;
                        case 29:printf("^]:29 ");break;
                        case 30:printf("^^:30 ");break;
                        case 31:printf("^_:31 ");break;
                        case 127:printf("^?:127 ");break;
                        default:break;
                    }
                }
            }
            cnt++;        
        
            if(ch=='\n')
            {
                printf("\n");
            }
            if(cnt == 10)
            {
                cnt=0;
                putchar('\n');
            }
           return 0;
    }
}