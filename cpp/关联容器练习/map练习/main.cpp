#include <iostream>
#include<map>
using namespace std;

int main()
{
    multimap<int,string>::iterator it;
  multimap<int,string>map1;

  int i=0;string temp;int xing;
  while(temp!="end")
  {cin>>xing;cin>>temp;
      map1[xing]=temp;

  }

  for(it=map1.begin();it!=map1.end();it++)
  {
      if(it->first==1)
      {
          cout<<it->second<<endl;
      }
  }
}
