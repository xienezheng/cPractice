#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
  FILE * fp;
  char a[3][100];
  int i,j,k;
  if((fp=fopen("c.dat","r"))==NULL)
  {
      printf("无法打开此文件\n");
      exit(0);
  }
while(fgets(a[i],10,fp)!=NULL)
{
    puts(a[i]);
    i++;
}

  fclose(fp);
  return 0;
}
