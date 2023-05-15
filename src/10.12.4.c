#include<stdio.h>
int main()
{
    int *ptr;
    int torf[2][2] = {{12}, {14, 16}};
    // int torf[2][2] = {12,14,16};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",torf[i][j]);
        }
        printf("\n");
    }
    ptr = torf[0];
    printf("%p\n",ptr);
}