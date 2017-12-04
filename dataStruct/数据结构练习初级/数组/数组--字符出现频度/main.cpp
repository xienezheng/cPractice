#include <iostream>
#include<string>
using namespace std;
void times(string s)
{
    int i;
    int acnt=0,bcnt=0,ccnt=0;
    for(i=0;i<s.size();i++)
    {
    switch(s[i])
    {
        case 'a':acnt++;break;
        case 'b':bcnt++;break;
        case 'c':ccnt++;break;
    }
    }
    cout<<"a:"<<acnt<<endl;
    cout<<"b:"<<bcnt<<endl;
    cout<<"c:"<<ccnt<<endl;
}
int main()
{
    string s;
    cin>>s;
    times(s);
}
