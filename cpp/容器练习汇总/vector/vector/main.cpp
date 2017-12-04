#include <iostream>
#include<vector>
using namespace std;

int main(int agrv,char *agrc[])
{
vector<int>v;

int a;
while(cin>>a&&a!=0)
{
    v.push_back(a);
}
cout<<v[3];
}
