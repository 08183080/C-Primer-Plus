#include<stdio.h>
int main()
{
    int workhour=0;
    float salary=0;
    float taxsum=0;
    float real_salary=0;
    printf("Please enter hours you work in a week.\n");
    scanf("%d",&workhour);
    if(workhour>40) workhour*=1.5;

    salary=10.0*workhour;
    if(salary<=300){
        taxsum=300*0.15;
    }else if(salary<=450){
        taxsum=300*0.15+(salary-300)*0.2;
    }else{
        taxsum=300*0.15+150*0.2+(salary-450)*0.25;
    }

    real_salary=salary-taxsum;
    printf("salary:%.2f\n",salary);
    printf("taxsum:%.2f\n",taxsum);
    printf("real_salary:%.2f\n",real_salary);
    return 0;
}