#include <iostream>
#include<stdlib.h>
using namespace std;
template<typename T>
int com(const T &v1,const T &v2)
{
 if(v1<v2)
 {
    return(-1);
 }else
 {
     return(1);
 }
}
int main()
{

    int v1=3;int v2=2;
    cout<<com(v1,v2);

}
