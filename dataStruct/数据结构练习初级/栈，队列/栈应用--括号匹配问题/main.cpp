#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    char a[100];
    int i,j,k;
    cin>>a;
    while(a[i]!='\0')
    {
        i++;
        if(a[i]=='[')
        {
            s.push(a[i]);
        }
        if(a[i]==']'&&s.top=='[')
        {
            s.pop();


        }

    }

}
