#include <iostream>
#include<string>
using namespace std;
int cnt=0;
void array(string s)
{
    int a[10],b[10];
    int i,j;
    for(i=0;i<s.size();i++)
    {
        a[i]=s[i];
    }
    for(j=0,i=s.size()-1;i>=0;j++,i--)
    {
        b[j]=s[i];
    }
    for(i=0;i<s.size();i++)
    {
        if(a[i]!=b[i])
        {
            break;
        }
        if(i==s.size()-1)
        {
            cout<<"回文"<<endl;
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<"不是回文"<<endl;
    }

}
int main()
{string s;
cin>>s;
array(s);
}
