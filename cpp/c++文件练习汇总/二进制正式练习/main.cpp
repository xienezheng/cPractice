#include <iostream>
#include<fstream>
using namespace std;
int a[2]={12,55};
int main()
{int i=0;
    ofstream os("D:\\erjinzhi.txt",ios_base::out|ios_base::binary);
    for(i=0;i<1;i++)
    {
    os.write(reinterpret_cast<char *>(a[i]),sizeof(a));
    }
    os.close();

}


