#include <iostream>
#include<fstream>
using namespace std;//ע�⣺1��ͷ�ļ���ؼ���2���洢�ص��״��Զ����ɣ������tet�ļ�3��!eof()4,<<,>>

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
