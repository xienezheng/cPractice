#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    string a;
    int i=0;
    ifstream ifi;
    ifi.open("D:\\save2.txt");
while(!ifi.eof())
{
   ifi>>a;
   cout<<a;
}

    ifi.close();
}
