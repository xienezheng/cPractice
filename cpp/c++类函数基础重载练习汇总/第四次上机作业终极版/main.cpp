#include<iostream>
#include<cstdlib>
using namespace std;//xigou,¬delete,ÎÄ¼þ£¨.h,torwejian,string::)The use of new;,why case limit;x.p,all have its name to operator


class string1
{
    char *p=new char[10];
public:
    string1(char *p1)
{
    int i=0;
    while(p1[i]!='\0')
    {
        p[i]=p1[i];
        i++;
    }
}//构造
string1(int n,char ch)
{
    int i;

    for(i=0; i<n; i++)
    {
        p[i]=ch;
    }
}//构造

    string1 &operator=(const string1&x)
    {
        p=x.p;
        return *this;
    };//赋值

    void display();
    void strlen1();
    void super();
    void lower();
    int strcmp(const string1&x);
    void  strcat(const string1&x);
    void  strcpy(const string1&x);
    void memset(char ch,int n);
    friend ostream &operator<<(ostream &os,string1 &x)
    {
        os<<x.p;
        return os;
    }//友元，重载输出
    friend istream & operator>>(istream &is,string1 &x)
    {
        is>>x.p;
        return is;
    }//友元，重载输入


    ~string1();
};


void string1::display()
{
    cout<<p;
}//输出
void string1::strlen1()
{
    int i=0;
    int cnt=0;
    while(p[i]!='\0')
    {
        cnt++;
        i++;
    }
    cout<<cnt;
}//测量长度
void string1::super()
{
    int i=0;
    while(p[i]!='\0')
    {
        if(p[i]<'z'&&p[i]>'a')
            p[i]=p[i]-32;
        i++;
    }
}//小写变大写
void string1::lower()
{
    int i=0;
    while(p[i]!='\0')
    {
        if(p[i]<'Z'&&p[i]>'A')
            p[i]=p[i]+32;
        i++;
    }
}//大写变小写

int string1::strcmp(const string1&x)
{
    int i=0,cnt=0;
    while(p[i]!='\0')
    {
        if(p[i]>x.p[i])
        {
            break;
            return(1);
        }
        if(p[i]<x.p[i])
        {
            break;
            return(-1);
        }
        if(p[i]==x.p[i])
        {
            cnt++;
        }
        if(cnt==i)
        {
            return(0);
        }
    }
}//比较
void string1::strcat(const string1&x)
{
    int j=0,i=0,cnt=0;
    while(p[i]!='\0')
    {
        cnt++;
        i++;
    }
    for(i=cnt, j=0; x.p[j]!='\0'; j++,i++)
    {
        p[i]=x.p[j];
    }

}//连接
void string1::strcpy(const string1&x)
{
    p=x.p;
}//复制
void string1::memset(char ch,int n)
{
    int i=0;
    while(p[i]!='\0')
    {
        p[i]=ch;
        i++;
    }
}//清空函数
string1::~string1()
{
 cout<<"析构"<<endl;
 delete []p;
}

int main()
{
    int j,k,n;
    char *p=new char[10];
    string1 one("dsdfsdfsxsd");
    string1 thr("dfsdg");
    string1 two(10,'c');

    char ch;
    system("color 24");
    for(j=1; j>0; j++)
    {
        cout<<"            **********************************************\n";
        cout<<"              0:Exit                                      \n";
        cout<<"              1:The first struct function and display     \n";
        cout<<"              2:The second struct function and display    \n";
        cout<<"              3:The third struct function and display     \n";
        cout<<"              4:The function of strlen1                   \n";
        cout<<"              5:The function of super                     \n";
        cout<<"              6:The function of lower                     \n";
        cout<<"              7:The function of strcat                    \n";
        cout<<"              8:The function of strcmp                    \n";
        cout<<"              9:The function of syrcpy                    \n";
        cout<<"             10:The function of memset                    \n";
        cout<<"             11:The funcyion of input                     \n";
        cout<<"             12:The function of output                    \n";
        cout<<"            **********************************************\n";
        cout<<"Please choose your operation"<<endl;
        cin>>k;
        if(k==0)
        {
            break;
        }
        switch(k)
        {
        case 1:
            cout<<"Please enter the string\n";
cin>>one;
            one.display();

            break;
        case 2:
             cout<<"Please enter the string\n";
cin>>one;
            two.display();

            break;
        case 3:
            cout<<"Please enter the string\n";
            cin>>two;
            one=two;

            one.display();

            break;
        case 4:
            cout<<"Please enter the string\n";
             cin>>two;
            two.strlen1();

            break;
        case 5:
            cout<<"Please enter the string\n";
             cin>>one;
            one.super();
            one.display();

            break;
        case 6:
           cout<<"Please enter the string\n";
             cin>>one;
            one.lower();

            one.display();

            break;
        case 7:

            one.strcat(two);
            one.display();

            break;
        case 8:
            cout<<one.strcmp(two);

            break;
        case 9:
            one.strcpy(two);
            one.display();

            break;
        case 10:
            one. memset('e',sizeof(one));
            one.display();

            break;
        case 11:
            cout<<"Please enter the string\n";
            cin>>one;
            one.display();

            break;
        case 12:
            cout<<two;

            break;





        }
    }
}





