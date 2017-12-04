#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    string save;
    ofstream out;
    out.open("D:\\double.tet");
    while(cin>>save&&save!="end")
    {
        out<<save;
    }
    out.close();
}
