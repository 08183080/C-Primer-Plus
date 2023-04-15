#include<stdio.h>
int main()
{
    const double RENT=3852.99;      //const变量

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.3f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%09.2f*\n",RENT);

    return 0;
}