#include <iostream>

using namespace std;//����������Ķ��üӸ�ģ��
template<typename T>//ģ�嶨�壬���Ͷ��������ģ������������ֵ����������������͡�
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
    void combine(list1<int> &two)//�����󣬺ʹ�����һ��������ʱ����ʡ�
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
    void sort(list1<int> two)//�鲢����
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
        for(i=0; i<=cnt; i++)
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

};
template<typename T>//���ⶨ��Ҳ��Ҫģ�壻��ͬ����ͨc++��ĵط���
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
    two.add();
    one.add();
one.sort(two);
    one.display();
}
