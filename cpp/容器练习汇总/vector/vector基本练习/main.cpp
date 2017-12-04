#include <iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int>temp;
  int a;
  int i;
  for(i=0;i<=9;i++)
  {
      cin>>a;
      temp.push_back(a);
  }
  for(i=0;i<9;i++)
  {
      cout<<temp[i]+temp[i+1];
  }
}
