#include<stdio.h>
#define SALARY_1 8.75
#define SALARY_2 9.33
#define SALARY_3 10.00
#define SALARY_4 11.20
#define TAXRATE_1 0.15
#define TAXRATE_2 0.20
#define TAXRATE_3 0.25
int main()
{
    int level;          //根据level来判断时薪~
    float hour_salary;  //时薪
    int workhour=0;     //一周工作的小时数
    float salary=0;     //工资
    float taxsum=0;     //税收
    float real_salary=0;//实际工资

    //get 时薪
    while(scanf("%d",&level) && level!=5)
    {
        switch (level)
        {
            case 1:hour_salary=SALARY_1;break;
            case 2:hour_salary=SALARY_2;break;
            case 3:hour_salary=SALARY_3;break;
            case 4:hour_salary=SALARY_4;break;
            default:printf("please enter integers from 1 to 5...\n");break;
        }
        if(level==1 || level==2 || level==3 || level==4)    break;
    }

    //get 工时
    printf("Please enter hours you work in a week.\n");
    scanf("%d",&workhour);
    if(workhour>40) workhour*=1.5;

    // 工资
    salary=hour_salary*workhour;
    
    //税收
    if (salary<=300)
    {
        taxsum=300*TAXRATE_1;
    }else if(salary<=450){
        taxsum=300*TAXRATE_1+(salary-300)*TAXRATE_2;
    }else{
        taxsum=300*TAXRATE_1+150*TAXRATE_2+(salary-450)*TAXRATE_3;
    }
    
    //实际工资
    real_salary=salary-taxsum;

    printf("salary:%.2f\n",salary);
    printf("taxsum:%.2f\n",taxsum);
    printf("real_salary:%.2f\n",real_salary);

    return 0;
}