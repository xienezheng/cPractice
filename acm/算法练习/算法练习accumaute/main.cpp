#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>::iterator it;
    int i=0;
    for(i=0;i<=9;i++)
    {
        v.push_back(i);
    }
    int sum=accumulate(v.begin()+4,v.end(),0);
    cout<<sum;
}
