#include <iostream>
#include<queue>
using namespace std;

int main()
{
queue<int>q;
int i;
while(cin>>i&&i!=0)
{
    q.push(i);
}
cout<<q.front();
cout<<q.back();
}
