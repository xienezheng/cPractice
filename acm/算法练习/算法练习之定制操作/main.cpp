#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
bool dao(string s1, string s2)
{
    return s1<s2;
}
int main()
{
   string save;
   vector<string>v;
   int i;
   while(cin>>save&&save!="end")
   {
       v.push_back(save);
   }
   sort(v.begin(),v.end(),dao);
   for(i=0;i<v.size();i++)
   {
       cout<<v[i]<<endl;
   }
}
