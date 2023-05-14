#include<stdio.h>
void larger_of(double*,double*);

int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Before:%lf %lf\n",a,b);
    larger_of(&a,&b);
    printf("After:%lf %lf\n",a,b);
    return 0;
}

void larger_of(double* a,double* b)
{
    if(*a>*b){
        *b=*a;
    }else{
        *a=*b;
    }
}