// 调和平均数 1/((1/2)*(1/a + 1/b))
#include<stdio.h>
int main()
{
    double a,b;
    double ans=0;

    scanf("%lf %lf",&a,&b);
    // ans=1.0/(0.5*(1/a+1/b));
    ans=2*a*b/(a+b);
    printf("%lf\n",ans);
    return 0;
}