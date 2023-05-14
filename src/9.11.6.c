#include<stdio.h>
// 把最小值放入第1个变量，中间值放入第2个变量，最大值放入第3个变量。
void sortnum(double*,double*,double*);

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    sortnum(&a,&b,&c);
    printf("%lf %lf %lf\n",a,b,c);
    return 0;
}

void sortnum(double* a,double* b,double* c)
{
    double max=*a,min=*a,mid=*a;
    
    if(*b>max)  max=*b;
    if(*c>max)  max=*c;
    
    if(*b<min)  min=*b;
    if(*c<min)  min=*c;

    if(mid>*b && mid>*c){
        if(*b>*c)   mid=*b;
        else mid=*c;
    }

    if(mid<*b && mid<*c){
        if(*b<*c)   mid=*b;
        else mid=*c;
    }

    *a=min;
    *b=mid;
    *c=max;
}