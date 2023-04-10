#include<stdio.h>
int main()
{
    // 品脱，盎司，汤勺，茶勺
    float pintuo,bei,angsi,tangshao,cashao;
    scanf("%f",&bei);
    pintuo=bei/2;
    angsi=bei*8;
    tangshao=bei*8*2;
    cashao=bei*8*2*3;
    printf("品脱：%f\n",pintuo);
    printf("盎司：%f\n",angsi);
    printf("汤勺：%f\n",tangshao);
    printf("茶勺：%f\n",cashao);
    return 0;
}