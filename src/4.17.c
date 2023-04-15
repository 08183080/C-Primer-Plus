#include<stdio.h>
int main(void)
{
    int n;

    printf("Please enterthreeintegers:\n");
    scanf("%*d %*d %d",&n);
    printf("The last integer was %d\n",n);
    // scanf()中*的用法与此不同。把*放在%和转换字符之间时，会使得scanf()跳过相应的输入项。

    return 0;
}