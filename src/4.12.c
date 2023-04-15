#include<stdio.h>
int main()
{
    float n1=3.0;       //4B
    double n2=3.0;      //8B
    long n3=2000000000; //4B
    long n4=1234567890;

    // printf("%d\n",sizeof(long));

    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);

    return 0;
}