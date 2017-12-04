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
    void combine(list1<int> &two)//传对象，和传数组一样。访问时点访问。
    {
        int i;
        for(i=cnt; i<cnt+two.cnt; i++)
        {
            p[i+1]=two.p[i];
        }

        cnt=cnt+two.cnt;
    }
    void combine1(list1<int>two)//2.12
    {
        int i,j;
        for(i=0; i<two.cnt; i++)
        {
            for(j=0; j<cnt; j++)
            {
                if(two.p[i]==p[j])
                {
                    break;
                }
                if(j==cnt-1)
                {

                    p[cnt+1]=two.p[i];


                    cnt++;
                }
            }
        }
    }
    void sort(list1<int> two)//归并排序
    {
        int i,j;
        for(i=0; i<two.cnt; i++)
        {
            for(j=0; j<cnt; j++)
            {
                if(two.p[i]<=p[j])
                {
                    int k;
                    for(k=cnt-1; k>=j; k--)
                    {
                        p[k+1]=p[k];
                    }
                    p[j]=two.p[i];
                    cnt++;
                     break;
                }

            }
        }
    }
    void display()
    {
        int i;
        for(i=0; i<cnt; i++)
        {
            cout<<p[i]<<endl;
        }
    }

    void dao()//2.6
    {
        T temp;
        int i;
        for(i=0; i<cnt/2; i++)
        {
            temp=p[i];
            p[i]=p[cnt-i];
            p[cnt-i]=temp;
        }
    }
    void movezero()
    {
        int i,cnt1,k;
        cnt1=cnt;
        for(i=0;i<cnt1;i++)
        {

        if(p[i]==0)
        {

            int j;
            for(j=i;j<cnt-1;j++)
            {
                p[j]=p[j+1];
            }
            cnt1--;
             p[cnt-1]=0;
             i--;
        }

        }


    }
    void divide()
    {
        T a[3],b[3];
        int i,j,k=0,temp1,temp2;
        for(i=0;i<cnt;i++)
        {
        if(p[i]>=0)
        {
            for(j=0;;j++)
            {
                a[j]=p[i];
            }

            temp1=j;
        }

    }
    for(i=0;i<=temp1;i++)
    {
        cout<<a[i]<<endl;
    }
    }
    void move1(int m,int n)
    {
        int a[m];
        int i,j;
        for(i=0;i<m;i++)
        {
            a[i]=p[i];
        }
        for(j=0,i=m;j<n,i<m+n;j++,i++)
        {
            p[j]=p[i];
        }
        for(i=n,j=0;i<n+m;j++,i++)
        {
            p[i]=a[j];
        }
        for(i=0;i<m+n;i++)
        {
        cout<<p[i]<<endl;
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

    one.add();
    one.move1(2,3);

}
