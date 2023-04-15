#include<stdio.h>
int main()
{
    printf("%x %X %#x\n",31,31,31);
    printf("**%d**% d**-%d**\n",42,42,42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);   // %m.nd     全体占位是m位，数据占位是n位，不足就往前填充0
    return 0;
}