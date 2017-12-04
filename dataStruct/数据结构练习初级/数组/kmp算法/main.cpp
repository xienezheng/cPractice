#include <iostream>
#include<string>
using namespace std;
void next1(string s,int *(&next))
{
    int j=0,k=-1;
    next[0]=-1;
    while(j<s.size())
    {
        if(k==-1||s[j]==s[k])
        {
            j++;
            k++;
            next[j]=k;
        }
        else{
            k=next[k];
        }
    }
}
int main()
{
    string s,tar;
    int sp=0,tarp=0;
    int next[20];
    cout<<"please enter the tar"<<endl;
    cin>>tar;
    cout<<"please enter the s"<<endl;
    cin>>s;
    next1(s,*(&next))
    while(sp<s.size()&&tarp<tar.size())
    {
        if(tarp==-1||tar[tarp]==s[sp])
        {
            tarp++;
            sp++;
        }
        else{
            tarp=next[tarp];
        }
    }
    if(tarp<tar.size())
    {
        cout<<"no"<<endl;

    }
    else{
        cout<<"yes"<<endl;
    }


}
