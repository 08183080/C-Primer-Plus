#include<stdio.h>
int main()
{
    const char * pc="I am dragon dragon.";
    const char * p="change now";
    pc=p;
    printf("Now pc:%s\n",pc);
    // extern int dragon;
    // printf("%d\n",dragon);
    return 0;
}