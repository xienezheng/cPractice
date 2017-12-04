#include <iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
    ifstream  in;
    in.open("D:\\vector.txt");
    vector<string>v(10,"hi");
    int i=0;
    for(i=0;i<10;i++)
    {
        in>>v[i];
        cout<<v[i]<<endl;
    }
}
