#include <iostream>

using namespace std;//return 是神魔后果
int a[5][5];
void anpoint(int m,int n)
{
    int i,j,t,k,x,y;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t=a[i][0];
            if(a[i][j]<=t)
            {
                t=a[i][j];
                x=i;y=j;

            }
        }

         for(k=0;k<m;k++)
        {
        if(a[k][y]>t)
        {
           break;

        }
        if(k==m-1)
        {
          cout<<"anpoint is in "<<"a["<<x<<"]["<<y<<"]"<<endl;
        }
        }


    }
    if(i==m-1)
        {
            cout<<"There is no  anpoint"<<endl;
        }
}
int main()
{
    int i,j,k,m,n;
    cout<<"please enter the m and n"<<endl;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    anpoint(m,n);
}
