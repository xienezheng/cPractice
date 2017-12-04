#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
using namespace std;

int main()
{
    int i;
    int a;
vector<int>v;
vector<int>::iterator it,it1;
    for(i=0;i<10;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<10;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    it=unique(v.begin(),v.end());
    for(it1=v.begin();it1!=it;it1++)
    {
        cout<<*it1<<endl;
    }
    cout<<endl;
}
