#include<stdio.h>
void to_base_n(int,int);

int main()
{
    int num,base;
    scanf("%d %d",&num,&base);
    to_base_n(num,base);
    return 0;
}

void to_base_n(int num,int base)
{
    int q=num%base;
    if(num=(num/base)) to_base_n(num,base);
    printf("%d",q);
}