#include <iostream>
#include<string>
using namespace std;
int cnt=0;
int match(string tar,string s)
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
            return (i);

        }
        if(i==tarlen-1&&cnt==0)
        {
            cout<<"There is no other match"<<endl;
        }

    }
}
int main()
{
    int i,j,len1,len2,len3,k;
    string tar,s,replaces;
    cout<<"please enter the tar"<<endl;
    cin>>tar;
    cout<<"please enter the s"<<endl;
    cin>>s;
    cout<<"please enter the replaces"<<endl;
    cin>>replaces;
    len1=tar.size();
    len2=s.size();
    len3=replaces.size();
   k=match(tar,s);
   for(i=len1-1;i>=k+len2;i--)
   {
       tar[i+len3]=tar[i];
   }
   for(i=k+1,j=0;j<len3;j++,i++)
   {
       tar[i]=replaces[j];
   }
   cout<<tar;
}
