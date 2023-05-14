#include<stdio.h>
#define SIZE 5
void show_array(const double ar[],int n);
void mult_array(double ar[],int n,double mult);

int main(void)
{
    double dip[SIZE]={20.0,17.66,8.2,15.33,2.88};

    printf("The original dip array:\n");
    show_array(dip,SIZE);
    mult_array(dip,SIZE,2.5);
    printf("The dip array after calling mult_array():\n");
    show_array(dip,SIZE);

    return 0;
}

void show_array(const double ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%8.3f",ar[i]);
    putchar('\n');      //今天第一次体会到debug的快乐hh,刚才将putchr()里面放的是"\n",输出有些异常
}

void mult_array(double ar[],int n,double mult)
{
    int i;

    for(i=0;i<n;i++)
        ar[i]*=mult;
}