#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100]="1234214";
    int b;
    b=22;
    a[3]=b/10+'0';
    printf("%s",a);
}
