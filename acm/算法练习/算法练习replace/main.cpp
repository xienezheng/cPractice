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
    for(i=1;i<=9;i++)
    {
        v.push_back(i);
    }
    for(i=1;i<=9;i++)
    {
        v1.push_back(i);
    }
 replace_copy(v.begin(),v.begin(),back_inserter(v1),3,4);

for(i=0;i<=9;i++)
    {
        cout<<v1[i];
    }
}
