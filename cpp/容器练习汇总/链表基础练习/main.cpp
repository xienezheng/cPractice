#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<string>v;
    list<string>::iterator it;
    string i;
    while(cin>>i&&i!="end")
    {
        v.push_back(i);
    }


    for(it=v.begin();it!=v.end();it++)
    {
        if(*it=="ddd")
        {
            v.insert(t);
        }
    }

    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it;
    }
}
