#include <iostream>

using namespace std;

int main()
{
    string two,thr;
    string one("xienezheng");
    two=one;
    thr="cug";//赋值可以先定义再操作
string fou(5,'n');//初始化必须如此，如果先定义在赋值会有错；
    cout<<one<<endl;
    cout<<two<<endl;
    cout<<thr<<endl;
    cout<<fou<<endl;
}
