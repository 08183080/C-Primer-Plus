#include<stdio.h>
void copy_arr(double dst[],double src[],int n);
void copy_ptr(double dst[],double *src,int n);
void copy_ptrs(double dst[],double *src,double *ddd);

int main()
{
    double src[5]={1.1,2.2,3.3,4.4,5.5};
    double dst[5];

    copy_ptrs(dst,src,src+5);
    for(int i=0;i<5;i++){
        printf("%g ",dst[i]);   //默认以最小方式输出
    }


    return 0;
}

void copy_arr(double dst[],double src[],int n)
{
    for(int i=0;i<n;i++){
        dst[i]=src[i];
    }
}

void copy_ptr(double dst[],double *src,int n)
{
    for(int i=0;i<n;i++)
    {
        dst[i]=*(src+i);
    }
}

void copy_ptrs(double dst[],double *src,double * ddd)
{
    //double * pos=dst;
    for(double *p=src;p<ddd;p++){
        *dst=*p;
        dst++;
    }
}


