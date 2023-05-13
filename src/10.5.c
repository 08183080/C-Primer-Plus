// 指定元素初始化
#include<stdio.h>
int main()
{
    // C99新增加的特性
    int a[]={1,2,[4]=4};
    for(int i=0;i<sizeof a/sizeof a[0];i++){
        // printf("%d ",a[i]);
        printf("%d ",*(a+i));
    }
    return 0;    
}