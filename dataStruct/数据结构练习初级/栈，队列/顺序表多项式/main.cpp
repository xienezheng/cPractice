#include <iostream>

using namespace std;//反正关于类的都得加个模板
template<typename T>//模板定义，类型定义变量，模板类型做返回值，定义对象须有类型。
class list1
{
private:
    T *p;
    int cnt=0;
public:
    list1(int n)
    {
        p=new T[n];
        cnt=n;
    }
    int size()
    {
        return(cnt);
    }
    void add();
    void insert(int n,T date)
    {
        cin>>date;
        int i;
        for(i=cnt-1; i>n; i--)
        {
            p[i+1]=p[i];
        }
        p[n]=date;
        cnt++;
    }

    void display()
    {
        int i;
        for(i=0; i<cnt; i++)
        {
            if(i==0)
            {
                cout<<p[i];
            }
            if(i!=0)
            {
            if(p[i]==0)
            {
                continue;
            }
            if(p[i]>0)
            {
            cout<<"+"<<p[i]<<"x^"<<i;
            }
            if(p[i]<0)
            {
                cout<<p[i]<<"x^"<<i;
            }
            }
        }
    }
    void add1(list1<T> one,list1<T> two)
    {
        int i;
        if(one.cnt>=two.cnt)
        {
            for(i=0;i<one.cnt;i++)
            {
                p[i]=one.p[i]+two.p[i];
            }
            cnt=one.cnt;
        }
        if(one.cnt<two.cnt)
        {
            for(i=0;i<two.cnt;i++)
            {
                p[i]=one.p[i]+two.p[i];
            }
            cnt=two.cnt;
        }
    }
     void abs(list1<T> one,list1<T> two)
    {
        int i;
        if(one.cnt>=two.cnt)
        {
            for(i=0;i<one.cnt;i++)
            {
                p[i]=one.p[i]-two.p[i];
            }
            cnt=one.cnt;
        }
        if(one.cnt<two.cnt)
        {
            for(i=0;i<two.cnt;i++)
            {
                p[i]=one.p[i]-two.p[i];
            }
            cnt=two.cnt;
        }
    }
    void multimap1(list1<T>one,list1<T>two)
    {
        int i,j,k=0;
        for(i=0;i<one.cnt;i++)
        {
            for(j=0;j<two.cnt;j++)
            {
                p[k]=one.p[i]*two.p[j];
                k++;
                cnt=k;
            }
        }

    }


};
template<typename T>//类外定义也需要模板；不同于普通c++类的地方；
void list1<T>::add()
{
    int i;
    T temp;
    for(i=0; i<cnt; i++)
    {
        cin>>temp;
        p[i]=temp;
    }
}

int main()
{

    list1<int> one(5);
    list1<int>two(5);
    list1<int>result(10);

  one.add();
   two.add();
   result.multimap1(one,two);
   result.display();
}
