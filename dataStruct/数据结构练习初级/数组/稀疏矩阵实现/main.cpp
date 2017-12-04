#include <iostream>
//好像好多类都是节点加串起节点的类，因为数据是离散的独立的，所以采用嵌套类。若果是顺序的可连续操纵的，就不必要
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
    friend ostream& operator<<(ostream& out,sparema<T>&M)//输入的就是m。sp【】
    {
        int i;
        for(i=0;i<M.cnt;i++)
        {
            out<<"M["<<M.sp[i].x<<"]["<<M.sp[i].y<<"]="<<M.sp[i].temp<<endl;
        }
    }

    friend istream& operator>>(istream& in,sparema<T>&M)//运算符重载也是需要定义的，给忘了
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
