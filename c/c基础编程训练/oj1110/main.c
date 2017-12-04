#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char a[100];
    int i;
    scanf("%c",&ch);
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=ch)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
