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

        v.push_back(i);
    }
    max(v.begin(),v.end());

}
