#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void copy(char *p,int n)
{
    int i,j,k;
    char *p2,b[20];
    memset(b,'\0',sizeof(b));
    p2=b;
    for(i=n,j=0;*(p+i)!='\0';j++,i++)
    {
        *(p2+j)=*(p+i);

    }
    printf("%s",p2);
}
int main()
{
    int i,j,k,n;
    char a[20],b[20];
    char *p,*p2;
    gets(a);
    scanf("%d",&n);
    p=a;
    copy(p,n);
    return 0;
}
