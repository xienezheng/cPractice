#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    vector<double>v;
    vector<int>v1;
    int i=0;
    for(i=0;i<=9;i++)
    {
        v.push_back(i);
    }
    for(i=0;i<=8;i++)
    {
        v1.push_back(i);
    }
   cout<<equal(v.begin(),v.end(),v1.begin());

}
