#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * f;   // 文件指针
    char ch;
    char fanme[50];
    int cnt=0;

    printf("Please enter the file name:");
    scanf("%s",fanme);

    f=fopen(fanme,"r");     // fopen和fclose()函数~
    if(f==NULL){
        printf("Fail to open the file~\n");
        exit(1);
    }

    while ((ch=getc(f))!='#')
    {
        cnt++;
    }
    fclose(f);
    printf("The characters summed:%d\n",cnt);

    return 0;
}