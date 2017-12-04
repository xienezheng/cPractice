#include <iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
   priority_queue<int>s;
   bool b;
   int a[10];
   int i,n;
   cin>>n;

   for(i=0;i<n;i++)
   {cin>>a[i];
       s.push(a[i]);
   }
   while(!s.empty())
   {
       cout<<s.top();
       s.pop();
   }


}


