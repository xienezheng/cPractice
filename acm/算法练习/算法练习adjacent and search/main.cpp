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
    for(i=0;i<9;i++)
    {cin>>k;
        v.push_back(k);
    }
    for(i=0;i<9;i++)
    {
        cout<<v[i];
    }
    cout<<endl;
   it=adjacent_find(v.begin(),v.end());
     cout<<*it;
     cout<<endl;
     it1=search_n(v.begin(),v.end(),2,3);
     cout<<*it1+3;

}
