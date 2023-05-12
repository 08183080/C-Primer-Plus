#include<stdio.h>
#include<locale.h>
#define BASE_1 17850
#define BASE_2 23900
#define BASE_3 29750
#define BASE_4 14875
#define TAXRATE_1 0.15
#define TAXRATE_2 0.28


int main()
{
    setlocale(LC_ALL,"en_US.UTF-8");

    int category;
    float salary;
    float taxnum;   //˰��

    printf("---  1.����, 2.����, 3.�ѻ�,����, 4.�ѻ�,����  ---\n");
    printf("���������(1,2,3,4)~\n");
    scanf("%d",&category);
    printf("�����빤��:\n");
    scanf("%f",&salary);

    switch (category)
    {
        case 1:
            if(salary<=BASE_1)  taxnum=salary*TAXRATE_1;
            else taxnum=BASE_1*TAXRATE_1+(salary-BASE_1)*TAXRATE_2;
            break;
        case 2:
            if(salary<=BASE_2)  taxnum=salary*TAXRATE_1;
            else taxnum=BASE_2*TAXRATE_1+(salary-BASE_2)*TAXRATE_2;
        case 3:
            if(salary<=BASE_3)  taxnum=salary*TAXRATE_1;
            else taxnum=BASE_3*TAXRATE_1+(salary-BASE_3)*TAXRATE_2;
        case 4:
            if(salary<=BASE_4)  taxnum=salary*TAXRATE_1;
            else taxnum=BASE_4*TAXRATE_1+(salary-BASE_4)*TAXRATE_2;
        default:
            break;
    }
    printf("%.2f\n",taxnum);

    return 0;
}