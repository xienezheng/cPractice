#include <iostream>

using namespace std;
int xia[10][10];
int shang[10][10];
int he[20][20];
void get(int n)
{
    int i,j,k;
    cout<<"enter the xiasanjiao"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>xia[i][j];
        }
    }
    cout<<"enter the shangsanjiao"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>shang[i][j];
        }
    }
}
void combine(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            he[i][j]=xia[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=i,k=i+1;j<n;j++,k++)
        {
            he[i][k]=shang[i][j];
        }
    }

}
void display(int n)
{int i,j,k;
    cout<<"this is xiashangjiao"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<xia[i][j];
        }
        cout<<endl;
    }
     cout<<"this is shangshangjiao"<<endl;
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<shang[i][j];
        }
        cout<<endl;
    }
    cout<<"this is heshangjiao"<<endl;
        for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<he[i][j];
        }
        cout<<endl;
    }
}
int main()
{

    int i,j,k,n,temp;

    cout<<"please enter the number of n"<<endl;
    cin>>n;

    get(n);
    combine(n);
    display(n);
cout<<"xia[i][j]=he[i][j]"<<endl;
cout<<"shang[i][j]=he[i][j+1]"<<endl;
}
