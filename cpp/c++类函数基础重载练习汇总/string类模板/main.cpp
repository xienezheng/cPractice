#include <iostream>
#include<stdio.h>
using namespace std;
class string1//ɾ����case���>>,empty() and compre's return is a big number;how to getline one time;
{
    char *p=new char[10];//to operate the bianliang instead of the object,so,x.p[i] or p[i],not s1[i];
public:
    string1(char *p1)//how to delete and how to destruct;
    {
        int i=0;
        while(p1[i]!='\0')//undone the getline() and empty();
        {
            p[i]=p1[i];
            i++;
        }
    }//���죬�ַ�������ָ�����ʽ
    string1(int n,char ch)
    {
        int i;

        for(i=0; i<n; i++)
        {
            p[i]=ch;
        }
    }//����
    string1 &operator=(const string1&x)
    {
        p=x.p;
        return *this;
    };//��ֵ

    friend ostream &operator<<(ostream &os,string1 &x)
    {
        os<<x.p;
        return os;
    }//��Ԫ���������
    friend istream & operator>>(istream &is,string1 &x)
    {
        is>>x.p;
        return is;
    }//��Ԫ����������
    friend string1& operator+(string1 &s1,string1 &s2)
    {
        int j=0,i=0,cnt=0;
        while(s1.p[i]!='\0')
        {
            cnt++;
            i++;
        }
        for(i=cnt, j=0; s2.p[j]!='\0'; j++,i++)
        {
            s1.p[i]=s2.p[j];
        }
        return(s1);
    }//ʵ�ֶ����ֱ������
    friend string1 &operator+(string1 &s1,char *k)
    {
        int j=0,i=0,cnt=0;
        while(s1.p[i]!='\0')
        {
            cnt++;
            i++;
        }
        for(i=cnt, j=0; k[j]!='\0'; j++,i++)
        {
            s1.p[i]=k[j];
        }
        return(s1);
    }//ʵ�ֶ������ַ���������
    char &operator[](int n)
    {
        return(p[n]);
    }//ʵ������ֵ��±����
//���������������صĲ��裬��������+����+operayor�����+���β����ã�������ã�ע�����ǰ��һ�������⣬�������أ�����ؼ�
    int size()
    {
        int i=0;
        int cnt=0;
        while(p[i]!='\0')
        {
            cnt++;
            i++;
        }
        return(cnt);
    }//��������
    bool empty()
    {
        if(p[0]=='\0')
        {
            return(false);
        }
        else
        {
            return(true);
        }

    }//���ز����ͱ�������δʵ�ֹ���
    void getline()
    {

        char a[10];
        int i=0;
        for(i=0;; i++)
        {
            cin>>a[i];
            if(a[i]=='\0')
            {
                printf(" ");
            }
            cout<<a[i];
            if(a[i]=='\n')
            {
                break;
            }
        }
    }//��ȡһ�У�δʵ��

};
bool issuper(char ch)//��������ܺ�����ͬΪ�����ͣ�����±����
{
    if(ch<='Z'&&ch>='A')
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
bool islower(char ch)
{
    if(ch<='z'&&ch>='a')
    {
        return(true);
    }
    else
    {
        return(false);
    }
}

bool isspace(char ch)
{
    if(ch==' ')
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
bool isxdigit(char ch)
{
    char a[17]= {"0123456789ABCDEF"};
    int i=0;
    for(i=0; i<=15; i++)
    {
        if(ch==a[i])
        {
            break;
            return(true);

        }
        i++;
    }
    if(i==15)
    {
        return(false);
    }
}
void tolower(char ch)
{
    if(ch<='Z'&&ch>='A')
    {
        cout<<ch;
    }
    if(ch<='z'&&ch>='a')
    {
        ch=ch-32;
        cout<<ch;
    }
}
void tosuper(char ch)
{
    if(ch<='Z'&&ch>='A')
    {
        ch=ch+32;
        cout<<ch;
    }
    if(ch<='z'&&ch>='a')
    {

        cout<<ch;
    }
}
bool isspant(char ch)
{
    if(ch>=33&&ch<=47)
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
bool isdigit(char ch)
{
    if(ch>='0'&&ch<='9')
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
bool isalpha(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
bool isalnum(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<+'9'))
    {
        return(true);
    }
    else
    {
        return(false);
    }
}
int main()
{
    string1 s1("scsc");
    string1 s2=s1+"jjjjj";

    cout<<isalnum(s1[2]);
    return(0);
}
