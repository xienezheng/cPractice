#include <iostream>
#include<math.h>
using namespace std;
template<class T>
class doubletree
{
    int *p=new int[31];

    int size1;
public:
    doubletree()
    {

        size1=0;
    }
    void insert1(int i,const T&temp)
    {
        p[i]=temp;
        size1++;

    }
    void add(const T&temp)
    {
        p[size1]=temp;
        size1++;
    }
    int treeheight()
    {
       return(log2(size1)+1);
    }
    int nodeheight(int i)
    {
       return(log2(i)+1);
    }
    int size()
    {
        return(size1);
    }
    bool empty()
    {
        if(size1==0)
        {
            return(true);
        }
        else{
            return(false);
        }
    }
    T getdate(int i)
    {
        return(p[i]);
    }
    T getparent(int i)
    {
        return(p[i/2-1]);
    }
    T getleftson(int i)
    {
        return(p[2*i-1]);
    }
    T getrightson(int i)
    {
        return(p[2*i]);
    }
    T getroot()
    {
        return(p[0]);
    }
    bool find(const T&temp)
    {
        int i;
        for(i=0;i<size1;i++)
        {
            if(p[i]==temp)
            {
                return(true);
            }
        }
        if(i==size1)
        {
            return 0;
        }
    }
};
int main()
{
 doubletree<int>one;
 one.add(1);
 one.add(2);
 one.add(3);
 one.add(4);
 one.add(5);
 one.add(6);
 one.add(7);
 one.add(8);

 cout<<one.nodeheight(5);

}
