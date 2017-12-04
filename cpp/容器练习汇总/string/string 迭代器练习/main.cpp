#include <iostream>
#include<iterator>
using namespace std;

int main()
{
    string s("dfsgsdfs");
    string &r=s;
int i=0;
   while(s[i]!='\0')
   {
       if(s[i]=='g')
       {
        r=s.insert(s[i],'G');
       }
       i++;
   }
cout<<s;
}



