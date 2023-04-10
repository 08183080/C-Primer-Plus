#include<stdio.h>
int main()
{
    float num;
    printf("Enter a floating-point value:");
    scanf("%f",&num);
    printf("fixed-point notation:%f\n",num);
    printf("expontential notation:%e\n",num);
    printf("p notation:%a",num);

    return 0;
}