#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<0 || num>127)    printf("非ASCII编码！");
    else if(num>=0 && num<=32)  printf("是控制字符");
    printf("%c",(char)num);

    return 0;
}