#include<stdio.h>
int main()
{
    int n;
    int status;
    int sum=0;
    
    printf("Please enter an integer to be summed(q to quit):");
    status=scanf("%d",&n);
    while(status==1)
    {
        sum=sum+n;
        printf("Please enter next integer to be summed(q to quit):%d\n",n);
        status=scanf("%d",&n);
    }
    printf("Sum:%d\n",sum);
    return 0;
}