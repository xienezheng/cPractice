#include <iostream>
#include<string>
using namespace std;
int cnt=0;
void match(string tar,string s)
{
    int i,j;
    int tarlen,slen;
    tarlen=tar.size();
    slen=s.size();
    for(i=0;i<tarlen;i++)
    {
        for(j=0;j<slen;j++)
        {
            if(tar[i+j]!=s[j])
            {
                break;
            }

            if(j==slen-1)
            {
                cout<<"match"<<i<<"to"<<i+j<<endl;
                cnt++;
            }


        }
        if(i==tarlen-1&&cnt==0)
        {
            cout<<"There is no other match"<<endl;
        }

    }
}
int main()
{
    string tar,s;
    cout<<"please enter the tar"<<endl;
    cin>>tar;
    cout<<"please enter the s"<<endl;
    cin>>s;
    match(tar,s);
}
