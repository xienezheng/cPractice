#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    if((fp=fopen("C:\\JJ\\a.dat","r"))==NULL)
    {
        printf("�޷��������ļ�\n");
        exit(0);
    }
    while(ch!=eof(fp))
        {
            ch=fgetc(fp);
            putchar(ch);

        }
    fclose(fp);
    return 0;
}
