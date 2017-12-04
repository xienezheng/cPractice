#include <iostream>
#include<fstream>
using namespace std;//注意：1，头文件与关键字2，存储地点易错，自动生成，最好用tet文件3，!eof()4,<<,>>

int main()
{string save;
    ifstream in;
    in.open("D:\\save2.txt");

while(!in.eof())
{
            in>>save;
            cout<<save<<endl;
}

    in.close();
}
