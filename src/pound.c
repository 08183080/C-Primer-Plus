#include<stdio.h>
void pound(int n);
int main()
{
    int times=5;
    char ch='!';
    float f=6.0;

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

void pound(int n)
{
    while(n--){
        printf("#");
    }
    printf("\n");
}