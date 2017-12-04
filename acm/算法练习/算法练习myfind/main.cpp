#include <iostream>
#include<vector>
using namespace std;
vector<int>::iterator find1(vector<int>::iterator v1,vector<int>::iterator v2,int b)
{
    vector<int>::iterator it;
    for(it=v1;it!=v2;it++)
    {
        if(*it==b)
        {
            break;
            return it;
        }

        if(it==v2-1)
    {
        return v2;
    }
    }


}
int main()
{
    vector<int>v;
    vector<int>::iterator it;
    int i=0;
    for(i=0;i<=9;i++)
    {
        v.push_back(i);
    }
   it=find1(v.begin(),v.end(),4);
    if(it==v.end())
    {
        cout<<"no";
    }
    else{
        cout<<"yes";
    }

}
