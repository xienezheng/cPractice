#include <iostream>

using namespace std;

int main()
{int a[10];
int i=0;
    string s("sfsxfxsdfxsdxfx");
    int pos1;
    int npos=-1;
    while(pos1=s.find("x")&&pos1!=npos)
    {
        cout<<pos1;
        ++pos1;
    }

}
