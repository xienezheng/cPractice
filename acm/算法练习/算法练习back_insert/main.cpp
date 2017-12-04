#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<iterator>
using namespace std;

int main()
{
    vector<int>v,v1;
    vector<int>::iterator it;
    int i=0;
    for(i=10;i<=19;i++)
    {
        v.push_back(i);
    }
 for(i=10;i<=19;i++)
    {
        v1.push_back(i);
    }
copy(v.begin(),v.end(),v1.begin());

for(i=0;i<=20;i++)
    {
        cout<<v1[i];
    }
}
