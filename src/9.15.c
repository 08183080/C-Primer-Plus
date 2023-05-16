#include<stdio.h>
void swap1(int m,int n);
void swap2(int* m,int* n );
void alter(int* m,int* n);  

int main()
{
    int m,n;
    
    scanf("%d %d",&m,&n);
    // printf("m swaps with n,w/o pointers used.\n");
    // swap1(m,n);
    // printf("%d %d\n",m,n);
    printf("m wapas with n,with pointers used.\n");
    
    printf("Before m:%p\n",&m);
    printf("Before n:%p\n",&n);
    swap2(&m,&n);
    printf("After m:%p\n",&m);
    printf("After n:%p\n",&n);

    printf("%d %d\n",m,n);

    return 0;
}

void swap1(int m,int n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
}

void swap2(int* m,int* n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;

    m=n;//被调函数能改变地址所指向的值, 但是指针的值的改变不会带回主函数的  没有卵用
}

void alter(int* m,int* n)
{
    int sum=*m + *n;
    int diff=*m - *n;
    *m=sum;
    *n=diff;
}