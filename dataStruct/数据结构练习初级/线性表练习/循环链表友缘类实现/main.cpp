#include <iostream>//��Ҫ��ͷ����������Ĺ�ϵ��num�������ֶ�Ӧ��������һ����0��ʼ
//�漰�����Ķ�Ҫ��ģ��
using namespace std;
template<typename T> class list1;//�����������ڽڵ����е�����Ԫ
template<typename T>
class node//
{
    friend class list1<T>;//��Ե��Ҳֻ�ܷ��ʹ��к��������ܷ���˽�г�Ա
private:
    T date;
    node<T>* next;

public:
    node(node*ptr=NULL)//ÿ����һ��������һЩ��ַ��Ҳ����˵����һ�ι��캯������һ���½ڵ㣬ͬʱ�е�ַ��

    {
        //�����У�����һ�Σ��ڵ�ָ��ָ��գ�ͬʱ��ֵ��
        next=ptr;
    }
    node(const T &temp,node*ptr=NULL)//Ĭ�Ϲ��캯��
    {
        date=temp;
        next=ptr;
        //Ӧ����û����һ�μ�һ
    }
    ~node()
    {
    };

};
template<typename T>
class list1
{
private:
    int size1;
    node<T>* head;//�ڵ���ͬ��ָ�룬����������ڵ�
    node<T> * num(int i)//˽�У���Ϊ��Ҫ������Ӧ�ã����к������Ե��á������Ϊ���У����ܷ���˽��Ԫ��
    {
        node<T> *pt=head;//ָ�����ֱ�ӷ���Ԫ��
        int j=0;
        while(j<i)
        {
            pt=pt->next;
            j++;
        }
        return(pt);
    }
public:
    list1()//����һ��������־�����ڹ����һ��ͷ���
    {
        node<T>* p=new node<T>();
        head=p;
        p->next=head;

        size1=0;

    }
    int size2()
    {

        return(size1);
    }
    void insert1(int i,const T &temp)
    {
        node<T>*p1=num(i);

        node<T>*q=new node<T>(temp);
        q->next=p1->next;
        p1->next=q;
        size1++;
    }
    T getdate(int i)
    {
        T temp1;

        node<T>* pt=num(i);//ͷָ���Ǵ���ָ�룬���Է���,��Ϊָ�������ڵ�

        temp1=pt->date;
        return (temp1);
    }
    void delete1(int i)
    {
        node<T>*pt=num(i-1);//˭��ָ����ָ��˭�ģ��Ⱥ����ǰ�������ָ��ֻΪ�Ⱥ��ұ�ָ���ָ��
        node<T>*p1=num(i);
        pt->next=p1->next;
        delete p1;
        size1--;
    }
    bool search1(T temp)
    {
        int i;
        for(i=1; i<=size1; i++)
        {
            node<T>*pt=num(i);
            if(pt->date==temp)
            {
                return true;
            }
            if(i==size1)
            {
                return false;
            }
        }
    }
    void display()
    {
        int i;
        node<T>*pt=head;
        for(i=1; i<=10; i++)
        {
            pt=pt->next;
            cout<<pt->date<<endl;
        }
    }
    void add(T temp)
    {
        node<T>*pt=num(size1);
        node<T>*p=new node<T>(temp,pt->next);
        pt->next=p;
        size1++;
    }
    void sort1()
    {
        T temp;
        int i,j;
        node<T>*p1;
        node<T>*p2;
        for(i=size1;i>=1;i--)
        {
            for(j=1;j<i;j++)
            {
                p1=num(i);
                p2=num(i+1);
                if(p1->date>=p2->date)
                {
                   temp=p1->date;
                   p1->date=p2->date;
                   p2->date=temp;
                }
            }
        }
    }


};
int main()
{
    list1<string> one;//Ϊɶ����Ҫ�����أ�


    one.insert1(0,"bfs");
    one.insert1(1,"bfs");
    one.insert1(2,"bfs");
    one.add("ttt");
    one.display();




}
