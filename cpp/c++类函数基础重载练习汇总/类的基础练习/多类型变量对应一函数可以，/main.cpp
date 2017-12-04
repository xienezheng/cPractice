#include <iostream>

using namespace std;

void ov(const int k)
{

    cout<<k;
}

void ov(int k)
{
    k=k+1;
    cout<<k;
}

int main()
{
    int b=0;

    ov(b);

}

//多类型变量对应一函数可以，但以变量对应多函数可能会错，引用和变量兼容，const和int也兼容，可同调一函数。但有多函数只有以变量
//时会错,难以匹配

