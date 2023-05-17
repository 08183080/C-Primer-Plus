#include<stdio.h>
int main()
{
    printf("%d\n",sizeof '\0');//1 B
    printf("%d\n",sizeof NULL);//在这个PC，8字节
}