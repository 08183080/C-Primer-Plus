#include<stdio.h>
void copy_arr(double dst[],double src[],int n);
void copy_ptr(double dst[],double *src,int n);
void copy_ptrs(double dst[],double *src,double *ddd);

int main()
{
    double src[5]={1.1,2.2,3.3,4.4,5.5};
    double dst[5];

    // printf("src:%p\n",src);
    printf("dst:%p\n",dst);
    copy_ptrs(dst,src,src+5);   
    //我在被调函数里面明明改变dst的值了，为什么没影响主调函数的dst呀? 
    //Ans: 指针值的改变是不会带回来的,但是指针指的值的改变可以
    printf("dst:%p\n",dst); 
    // printf("src:%p\n",src);
    
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
        printf("In func,dst:%p\n",dst);
        *dst=*p;
        dst++;
    }
}


