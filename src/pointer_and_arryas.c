#include<stdio.h>
int main()
{
    int zippo[4][2]={{0,1},{2,3},{4,5},{6,7}};
    int (*pz)[2];   //pz指针指向包含2个int的对象
    pz=zippo;

    printf("zippo:%p\n",zippo);
    printf("zippo[0]:%p\n",zippo[0]);
    printf("zippo[0][0]:%d\n",zippo[0][0]);

    //指针 or 地址 +1
    printf("zippo+1:%p\n",zippo+1);
    printf("zippo[0]+1:%p\n",zippo[0]+1);    

    // zippo[0][0] == **zippo == *zippo[0] == *&zippo[0][0] 
    printf("zippo[0][0]:%d\n",zippo[0][0]);
    printf("**zippo:%d\n",**zippo);
    printf("*zippo[0]:%d\n",*zippo[0]);
    printf("*&zippo[0][0]:%d\n",*&zippo[0][0]);

    return 0;    
}