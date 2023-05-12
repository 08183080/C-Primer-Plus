#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    int upper=0,lower=0;
    while ((ch=getchar())!=EOF)
    {
        if(islower(ch)) lower++;
        else if(isupper(ch)) upper++; 
    }
    printf("upper letters:%d\n",upper);
    printf("lower letters:%d\n",lower);
    return 0;
}