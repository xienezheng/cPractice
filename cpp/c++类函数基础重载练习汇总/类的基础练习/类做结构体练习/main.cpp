#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class student
{public:
    int num;
    char name[10];
};
int main()
{class student *a=(class student*)malloc(2*sizeof(class student));
int i;
    class student * p1,p2;
    class student one,two;
    p1=&one;
    for(i=0;i<2;i++)
    {
    scanf("%d%s",&a[i].num,a[i].name);
    printf("%d%s",a[i].num,a[i].name);
    }
}
