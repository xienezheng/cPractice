#include <iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>v;

    int i;
    while(cin>>i&&i!=0)
    {
        v.push(i);
    }


    cout<<v.top();

}
