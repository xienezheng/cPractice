#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string>name;
    string a;
    int i=0,j=0;
    while(cin>>a&&a!="s")
    {
        name.push_back(a);
    }
    for(i=0;i<name.size();i++)
    {
        for(j=0;name[i][j]!='\0';j++)
        {
            name[i][j]=name[i][j]-32;
        }
        cout<<name[i];
    }

}
