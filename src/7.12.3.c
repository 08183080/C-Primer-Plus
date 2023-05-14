#include<stdio.h>
int main()
{
    int num;
    int evennum=0,evensum=0;
    int oddnum=0,oddsum=0;
    while(scanf("%d",&num) && num!=0)
    {
        if(num%2==1){
            oddnum++;
            oddsum+=num;
        }else if(num && num%2==0){
            evennum++;
            evensum+=num;
        }
    }
    printf("evennum:%d, evenaverage:%.1f\n",evennum,1.0*evensum/evennum);
    printf("oddnum:%d, oddaverage:%.1f\n",oddnum,1.0*oddsum/oddnum);
    return 0;
}