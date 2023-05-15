#include<stdio.h>
int main()
{
    int grid[30][100];
    printf("%p\n",&grid[22][56]);

    printf("%p\n",&grid[22][0]);
    printf("%p\n",&grid[22]);

    printf("%p\n",&grid[0][0]);
    printf("%p\n",&grid[0]);
    printf("%p\n",grid);

    return 0;
}