/* guess.c -- 一个拖沓且错误的猜数字程序 */
#include <stdio.h>
int main(void)
{
    int guess = 50;
    int left=1;
    int right=100;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);

    while (getchar()!='y')
    {
        // while (getchar()=='\n')
        //     continue;
        printf("my guess number bigger or smaller? If Big, enter b,else enter s \n");
        if(getchar()=='b'){
            // while (getchar()=='\n')
            //     continue;
            right=guess;
            guess=(left+right)/2;
        }else if(getchar()=='s'){
            // while (getchar()=='\n')
            //     continue;
            left=guess;
            guess=(left+right)/2;            
        }
        printf("Well, then, is it %d?\n", guess);
    }
    
    printf("I knew I could do it!\n");
    return 0;
}