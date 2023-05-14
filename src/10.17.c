#include<stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS],int rows);
void sum_cols(int [][COLS],int rows);
int sum2d(int(*ar)[COLS],int rows);

int main()
{
    int junk[ROWS][COLS]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    sum_rows(junk,ROWS);
    sum_cols(junk,ROWS);
    printf("Sum of all elements=%d\n",sum2d(junk,ROWS));

    return 0;
}

void sum_rows(int ar[][COLS],int rows)
{
    int r;
    int c;
    int tot;

    for(r=0;r<rows;r++){
        tot=0;
        for(c=0;c<COLS;c++){
            tot+=ar[r][c];
        }
        printf("row %d:sum=%d\n",r,tot);
    }
}

void sum_cols(int ar[][COLS],int rows)
{
    int r;
    int c;
    int tot;

    for(c=0;c<COLS;c++){
        tot=0;
        for(r=0;r<rows;r++){
            tot+=ar[r][c];
        }
        printf("col %d:sum=%d\n",c,tot);
    }
}

int sum2d(int ar[][COLS],int rows)
{
    int r;
    int c;
    int tot;

    tot=0;
    for(r=0;r<rows;r++){
        for(c=0;c<COLS;c++){
            tot+=ar[r][c];
        }
    }
    return tot;
}