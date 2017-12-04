#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{int r;
    vector<int>v;
    vector<int>::iterator it,it1;
    int i=0;
    for(i=0;i<=9;i++)
    {
        v.push_back(i);
    }
   r=count(v.begin(),v.end(),3);
    cout<<r;

}
