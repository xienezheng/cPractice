#include <iostream>

using namespace std;
template<typename T>
class doublequeue
{
    T *p;
    int headtop;
    int headnext;
    int tailtop;
    int tailnext;
    int size;
public:
    minproqueue()
    {
        p=new T[20];
    int headnext=top=tailnext=10;
    int size=0;
    }
    void headpush(const T &temp)
    {
        p[headnext]=temp;
        headnext++;
     size++;
     if(headnext>=20)
     {
         cout<<"The queue is full"<<endl;
     }

    }
     void tailpush(const T &temp)
    {
        p[tailnext]=temp;
        tailnext--;
     size++;
     if(headnext<=0)
     {
         cout<<"The queue is full"<<endl;
     }

    }
    T headgetdate()
    {
     return(p[headnext]);
    }
    T tailgetdate()
    {
     return(p[tailnext]);
    }
    void headpop()
    {  if(headnext==top)
        {
            cout<<"The queue is empty"<<endl;
        }
        headnext--;
        size--;

    }
     void tailpop()
    {  if(tailnext==top)
        {
            cout<<"The queue is empty"<<endl;
        }
        tailnext++;
        size--;

    }
};
int main()
{


