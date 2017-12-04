#include <iostream>
#include<stdio.h>
#include<time.h>
using namespace std;

int main()
{
    time_t start1,end1;
    double dif;
    long long int i,cnt=0;
    time(&start1);
for(i=0;i<10000000000;i++)
{
    cnt=cnt+cnt*cnt*cnt;
}
    time(&end1);
    dif=difftime(end1,start1);
    cout<<dif;
}
