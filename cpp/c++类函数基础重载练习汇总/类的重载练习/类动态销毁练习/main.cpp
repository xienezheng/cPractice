#include <iostream>

using namespace std;

int main()
{
    char *p=new char[10];
    cin>>p;
    delete []p;
    cout<<p;
}
