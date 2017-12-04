#include <iostream>
#include<iterator>
using namespace std;

int main()
{
    string s("nezheng");
    string word;
    string::iterator it;
    it=s.begin();

  while(cin>>word)
  {
      it=s.insert(it,word);
  }
cout<<s;
}
