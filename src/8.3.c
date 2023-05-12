#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    FILE * fp;
    char fname[50];     

    printf("Enter the name of the file: ");
    scanf("%s",fname);
    //printf("%s",fname);
    fp=fopen(fname,"r");
  
    if (fp==NULL)
    {
        printf("Failed to open the file.Bye~\n");
        exit(1);
    }
    while ((ch=getc(fp))!='#')
    {
        // printf("fuck");
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
