#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char a[100];
int i,j,k;
char *p;
p=a;
gets(a);
for(i=0;*(p+i)!='\0';i++)
{
    printf("%c",*(p+i));
}
return 0;
}
