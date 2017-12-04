#include <iostream>
#include<algorithm>
#include<vector>
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
   it=find(v.begin(),v.end(),11);
    if(it==v.end())
    {
        cout<<"no";
    }
    else{
        cout<<"yes";
    }

}
