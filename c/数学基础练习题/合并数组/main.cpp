#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   vector<int>v;
   int a,b,i,j,temp;
   cin>>n;
   for(j=0;j<n;j++)
   {
   cin>>a;
   for(i=0;i<a;i++)
   {cin>>temp;
       v.push_back(temp);
   }
    cin>>b;
   for(i=0;i<b;i++)
   {cin>>temp;
       v.push_back(temp);
   }
   sort(v.begin(),v.end());
   for(i=0;i<a+b-1;i++)
   {
       cout<<v[i]<<" ";
   }
   cout<<v[a+b-1]<<endl;
}
}
