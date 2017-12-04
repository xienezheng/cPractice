#include <iostream>

using namespace std;
void fact(int n)
{
    int i;
    int sum=1;
    for(i=n;i>=1;i--)
    {
        sum=sum*i;
    }
    cout<<sum<<endl;
}
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
    fact(i);
    }
}
