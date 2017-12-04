#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector<string>::iterator it;
    vector<string>v(10,"hi");


    int i=0;
    string save;
it=v.begin();
   cin>>save;
   v.push_back(save);
 for(it=v.begin();it!=v.end();++it)
    {
        if(*it=="xie")
        {
           it=v.erase(it);
        }
    }
    for(it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<" ";
    }
}


