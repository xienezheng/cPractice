#include <iostream>//��Ҫ��ͷ����������Ĺ�ϵ��num�������ֶ�Ӧ��������һ����0��ʼ
//�漰�����Ķ�Ҫ��ģ��
#include<string>
#include<string.h>
using namespace std;
string s1,s2;
char number1[20],number2[20],index1[20],index2[20],ch;
int number3[20],number4[20],index3[20],index4[20];
int num3len=0,num4len=0;
void enter()
{int i,j=0;
    cout<<"please enter the first poly,end of +"<<endl;
    cin>>s1;

    cout<<"please enter the second poly,end of +"<<endl;

    cin>>s2;
    for(i=0;i<10;i++)
    {
        if(s1[i]=='+')
        {

            ch=s1[i-3];
        }
    }
    for(i=0;i<10;i++)
    {
        if(s2[i]=='+')
        {

            ch=s2[i-3];
        }
    }
    j=0;
     for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {

        number1[j]=s1[i-4];
        number3[j]=number1[j]-'0';
        j++;
        num3len++;
        }


    }
    j=0;
 for(i=0;i<s2.size();i++)
    {
        if(s2[i]=='+')
        {

        number2[j]=s2[i-4];
         number4[j]=number2[j]-'0';
        j++;
        num4len++;
        }

    }
    j=0;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {

        index1[j]=s1[i-1];
        index3[j]=index1[j]-'0';
        j++;
        }

    }
    j=0;
for(i=0;i<s2.size();i++)
    {
        if(s2[i]=='+')
        {

        index2[j]=s2[i-1];
        index4[j]=index2[j]-'0';
        j++;
        }

    }






}



template<typename T> class list1;//�����������ڽڵ����е�����Ԫ
template<typename T>
class node//
{
    friend class list1<T>;//��Ե��Ҳֻ�ܷ��ʹ��к��������ܷ���˽�г�Ա

public:

    T date;
    T index;
    node<T>* next;

public:
    node(node*ptr=NULL)//ÿ����һ��������һЩ��ַ��Ҳ����˵����һ�ι��캯������һ���½ڵ㣬ͬʱ�е�ַ��

    {
        //�����У�����һ�Σ��ڵ�ָ��ָ��գ�ͬʱ��ֵ��
        next=ptr;
    }
    node(const T &temp,const T & temp1,node*ptr=NULL)//Ĭ�Ϲ��캯��
    {
        date=temp;
        index=temp1;
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

    int size1;
    node<T>* head;
    //�ڵ���ͬ��ָ�룬����������ڵ�
    public:
    node<T> * num(int i)//˽�У���Ϊ��Ҫ������Ӧ�ã����к������Ե��á������Ϊ���У����ܷ���˽��Ԫ��
    {
        node<T> *pt=head;//ָ�����ֱ�ӷ���Ԫ��
        int j=0;
        while(pt!=NULL&&j<i)
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
        size1=0;

    }
    int size2()
    {

        return(size1);
    }
    void display()
    {
        int i=0;
        for(i=1;i<=size1;i++)
        {
            if(i<size1)
            {
            cout<<num(i)->date<<ch<<"^"<<num(i)->index<<"+";
            }
            else{
                cout<<num(i)->date<<ch<<"^"<<num(i)->index<<endl;;
            }
        }
    }


    void delete1(int i)
    {
        node<T>*pt=num(i-1);//˭��ָ����ָ��˭�ģ��Ⱥ����ǰ�������ָ��ֻΪ�Ⱥ��ұ�ָ���ָ��
        node<T>*p1=num(i);
        pt->next=p1->next;
        delete p1;
        size1--;
    }


    void add(T temp,int index)
    {
        node<T>*pt=num(size1);
        node<T>*p=new node<T>(temp,index,pt->next);
        pt->next=p;
        size1++;
    }
     void insert1(int i,const T &temp,int temp1)
    {
        node<T>*p1=num(i);

        node<T>*q=new node<T>(temp,temp1);
        q->next=p1->next;
        p1->next=q;
        size1++;
    }


};
 list1<int>one;
    list1<int>two;

int main()
{
void addoperate();
    int i;

    enter();
    for(i=0;i<num3len;i++)
    {
        one.add(number3[i],index3[i]);
    }
     for(i=0;i<num4len;i++)
    {
        two.add(number4[i],index4[i]);
    }
addoperate();

two.display();
}
  void addoperate()
{
    int i,j,k,t;
    int temp1,temp2;
    for(i=1;i<=one.size2();i++)
    {
        for(j=1;j<=two.size2();j++)
        {
            if(two.num(j)->index==one.num(i)->index)
            {
                temp1=one.num(i)->date+two.num(j)->date;

              two.num(j)->date=temp1;

            }
            if(j==two.size2()-1)
            {
                k=one.num(i)->index;
                for(t=0;t<two.size2();t++)
                {
                    if(k<two.num(t)->index)
                    {
                        two.insert1(t+1,one.num(i)->date,one.num(i)->index);
                    }
                }
            }
        }
    }
}

