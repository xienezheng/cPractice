#include <iostream>
//����ö��඼�ǽڵ�Ӵ���ڵ���࣬��Ϊ��������ɢ�Ķ����ģ����Բ���Ƕ���ࡣ������˳��Ŀ��������ݵģ��Ͳ���Ҫ
using namespace std;
template<typename T>
class node
{public:
    int x,y;
    T temp;
    node<T>& operator=(node<T> &tempnode)
    {
        x=tempnode.x;
        y=tempnode.y;
        temp=tempnode.temp;
    }
};
template<class T>
class sparema
{
    friend ostream& operator<<(ostream& out,sparema<T>&M)//����ľ���m��sp����
    {
        int i;
        for(i=0;i<M.cnt;i++)
        {
            out<<"M["<<M.sp[i].x<<"]["<<M.sp[i].y<<"]="<<M.sp[i].temp<<endl;
        }
    }

    friend istream& operator>>(istream& in,sparema<T>&M)//���������Ҳ����Ҫ����ģ�������
    {int i;
        cout<<"Enter number of rows,cols,and cnt"<<endl;
        in>>M.rows>>M.cols>>M.cnt;
        for(i=0;i<M.cnt;i++)
        {
            in>>M.sp[i].x>>M.sp[i].y>>M.sp[i].temp;
        }

    }
private:
    int cols,rows,cnt;
    node<T>* sp;
    int maxcnt;
public:
    sparema(int maxt)
    {
        maxcnt=maxt;
        sp=new node<T>[maxcnt];//p=new int[10];
        cols=rows=cnt=0;
    }
    ~sparema()
    {
        delete []sp;
    }
    sparema<T>&operator=(sparema<T> &x);
    sparema<T>change()
    {
        sparema<T>b(maxcnt);
        b.rows=rows;
        b.cols=cols;
        b.cnt=cnt;
        int k,i,pt=0;
        for(k=0;k<cols;k++)
        {

            for(i=0;i<cnt;i++)
            {
                if(sp[i].y=k)
                {
                    b.sp[pt].x=k;
                    b.sp[pt].y=sp[i].row;
                    b.sp[pt].temp=sp[pt].temp;
                    pt++;
                }
            }
        }
        return(b);

    }

};

int main()
{
    sparema<int> one(3);
cin>>one;
cout<<one;
}
