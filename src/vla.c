#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=1;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        putchar('\n');
    }
    return 0;
}