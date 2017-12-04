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
    fill_n(v.begin()+3,10,5);

for(i=0;i<=9;i++)
    {
        cout<<v[i];
    }
}
