#include<stdio.h>
void swap(double*,double*);
void sort(double*,double*,double*);

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    sort(&a,&b,&c);
    printf("%lf %lf %lf\n",a,b,c);
    return 0;
}

void swap(double* a,double* b)
{
    double temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(double* a,double* b,double* c)
{
    if(*a>*b)   swap(a,b);
    if(*b>*c)   swap(b,c);
}