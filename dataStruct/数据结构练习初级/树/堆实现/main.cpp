#include <iostream>

using namespace std;

template<class T>
class heap
{
private:
    T *p;
    int size;
    int maxsize=20;
    void siftdown(int start,int m)
    {
        int i=start;int j;
        j=2*i+1;
        T temp=p[j];
        while(j<=m)
        {
            if(j<m&&p[j]>p[j+1])
            {
                j++;
            }
            if(temp<=p[j])
            {
                break;
            }
            else{
                p[i]=p[j];
                i=j;
                j=2*j+1;
            }
        }
        p[i]=temp;
    }
    void siftup(int start)
    {
        int j=start,i=(j-1)/2;
        T temp=p[j];
        while(j>0)
        {
            if(p[i]<=temp)
            {
                break;
            }
            else
            {
                p[j]=p[i];
                j=i;
                i=(i-1)/2;
            }
            p[j]=temp;
        }
    }
public:
    heap()
    {
        p=new T[maxsize];
        size=0;
    }

    ~heap()
    {
        delete []p;
    }
    bool empty()
    {
        if(size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void insert(T temp)
    {
        p[size]=temp;
        siftup(size);
        size++;
    }
    void display()
    {
        int i;
        for(i=0;i<size;i++)
        {
            cout<<p[i];
        }
    }
    void getdata(int i)
    {
        cout<<p[i];
    }
    void delete1(T temp)
    {
        temp=p[0];
        p[0]=p[size-1];
        size--;
        siftdown(0,size-1);

    }
};
int main()
{
    heap<int>one;
    int i;
    for(i=9;i>=0;i--)
    {
    one.insert(i);
    }
    one.getdata(4);

}
