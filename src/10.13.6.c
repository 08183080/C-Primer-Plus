#include<stdio.h>
// 想清楚自己想要去做什么,想要就业,就去提升技术,尽早完成毕业要求,然后去实习~
// 金钱计划,挣个1w,体验一下挣钱是什么感觉,我太茫然hhh
// https://www.bilibili.com/video/BV1Zs4y1X7mN/?spm_id_from=333.337.search-card.all.click&vd_source=7e002a4fb29d232229ab19a2b58619e0


void swap(double *,double *);
void sort(double a[],int n);
void print(double a[],int n);

int main()
{
    double ar[6]={2,5,3,6,4,8};
    sort(ar,6);
    print(ar,6);

    return 0;
}


void swap(double * a,double * b)
{
    double temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

// 选择排序
void sort(double a[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i])   swap(&a[i],&a[j]);
        }
    }
}

void print(double a[],int n)
{
    for(int i=0;i<n;i++){
        printf("%g ",a[i]);
    }
}