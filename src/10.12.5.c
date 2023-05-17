#include<stdio.h>
int main()
{
    int (*ptr)[2];
    int torf[2][2]={{12},{14,16}};
    ptr=torf;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",torf[i][j]);
        }
        printf("\n");
    }    
    printf("**ptr:%d\n",**ptr);
    printf("**(ptr+1):%d\n",**(ptr+1));
    return 0;
}