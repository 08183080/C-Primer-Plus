#include<stdio.h>
void put1(const char* string)
{
    while (*string!='\0')
    {
        putchar(*string++);
    }
}

int main()
{
    const char* ch="1,23";
    put1(ch);
    return 0;
}

//花半秒钟就看透事物本质的人，和花一辈子都看不清事物本质的人，注定是截然不同的命运.