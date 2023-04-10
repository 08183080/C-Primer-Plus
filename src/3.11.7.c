#include<stdio.h>

int main()
{
    float height_inch;     //double是lf，float是f
    scanf("%f",&height_inch);
    float height_cm=height_inch*2.54;
    printf("身高 : %f cm\n",height_cm);
    return 0;
}