#include<iostream>
#include<algorithm>

#include<numeric>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it,it1;
    int i,k;
    int a[10];
    for(i=0;i<10;i++)
    {
        a[i]=i;
    }
   k=accumulate(a[1],a[10]);
   cout<<k;
}
