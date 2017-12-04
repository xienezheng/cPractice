#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    if(fp=fopen("D:\\c\\aaa.dat","r")==NULL)
    {
        printf("NULL");
        exit(0);
    }

    while(!feof(fp))
    {
            ch=fgetc(fp);
    putchar(ch);

    }
    fclose(fp);
    return 0;
}

