#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   FILE *fp;
   char ch;
   if((fp=fopen("C:\\JJ\\a.dat","w"))==NULL)
   {
       printf("�޷��򿪴��ļ�\n");
       exit(0);
   }
   ch=getchar();
   while(ch!='#')
   {
       fputc(ch,fp);
       putchar(ch);
       ch=getchar();

   }
   fclose(fp);
   return 0;
}
