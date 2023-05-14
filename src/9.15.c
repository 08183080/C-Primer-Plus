#include<stdio.h>
void swap1(int m,int n);
void swap2(int* m,int* n );
void alter(int* m,int* n);  

int main()
{
    int m,n;
    
    scanf("%d %d",&m,&n);
    printf("m swaps with n,w/o pointers used.\n");
    swap1(m,n);
    printf("%d %d\n",m,n);
    printf("m wapas with n,with pointers used.\n");
    swap2(&m,&n);
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
}

void alter(int* m,int* n)
{
    int sum=*m + *n;
    int diff=*m - *n;
    *m=sum;
    *n=diff;
}