#include <iostream>
#include<string>
//������򵥵����򷽷��⣬ʣ�����þ������ú���ʵ�����ȼ������ֵ�ת������������
//��isp(),icp(),�ڳ���������ź����ȼ���������
using namespace std;//������������ע��

template<class T>
class MaxProQueue
{
private:
    T *p;
    int top;
    int size;
public:
    MaxProQueue()
    {
        p=new T[10];
        top=0;
        size=0;
    }
    void push(const T &temp)
    {
        p[top]=temp;
        top++;
        size++;
        int i,j,k;
        for(i=top-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(p[j]>p[j+1])
                {
                    k=p[j];
                    p[j]=p[j+1];
                    p[j+1]=k;
                }
            }
        }
    }
    T getdate()
    {
        return(p[top-1]);
    }
    T size1()
    {
        return(size);
    }
    void pop()
    {
        top=top-1;
        size=size-1;
    }
};
template<class T>
class MinProQueue
{
private:
    T *p;
    int top;
    int size;
public:
    MinProQueue()
    {
        p=new T[10];
        top=0;
        size=0;
    }
    void push(const T &temp)
    {
        p[top]=temp;
        top++;
        size++;
        int i,j,k;
        for(i=top-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(p[j]<p[j+1])
                {
                    k=p[j];
                    p[j]=p[j+1];
                    p[j+1]=k;
                }
            }
        }
    }
    T getdate()
    {
        return(p[top-1]);
    }
    T size1()
    {
        return(size);
    }
    void pop()
    {
        top=top-1;
        size=size-1;
    }
};



struct student//�ṹ��ʵ��
{
    string name;
    int age;
};
template<class T>
class StructProQueue
{
private:
    T *p;
    int top;
    int size;
public:
    StructProQueue()
    {
        p=new T[10];
        top=0;
        size=0;
    }

int num(T temp)
{
    return(temp.name.size());
}
    void push(const T &temp)
    {
        p[top]=temp;
        top++;
        size++;
        int i,j;
        T k;
        for(i=top-1;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
                if(num(p[j])<num(p[j+1]))
                {
                    k=p[j];
                    p[j]=p[j+1];
                    p[j+1]=k;
                }
            }
        }
    }
    T getdate()
    {
        return(p[top-1]);
    }
    T size1()
    {
        return(size);
    }
    void pop()
    {
        top=top-1;
        size=size-1;
    }
};
int main()
{
StructProQueue<student>one;
 struct student q;
 struct student p;
 struct student r;
 r.name="h";
 r.age=0;
 p.name="eeeee";
 p.age=2;
 q.name="qwe";
 q.age=1;
 one.push(r);

   one.push(q);
one.push(p);




   cout<<one.getdate().name<<one.getdate().age;
}
