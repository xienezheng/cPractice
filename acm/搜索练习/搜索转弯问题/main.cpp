#include <iostream>
#include<stdlib.h>

#include<cstring>
using namespace std;
char map1[100][100];
int flag[100][100];
int N,m,n,I,i,j,k,x1,x2,y1,y2,cnt=0;


void DFS(int cnt,int starx1,int stary1)
{int x,y;
   x=starx1;
    y=stary1;
    if(cnt>k)
    {
        return;
    }
    if(map1[x+1][y]=='.'&&flag[x+1][y]==0)
    {
        flag[x+1][y]=1;
        DFS(cnt,x+1,y);
        flag[x+1][y]=0;
    }
    if(map1[x-1][y]=='.'&&flag[x-1][y]==0)
    {
        flag[x-1][y]=1;
        DFS(cnt,x-1,y);
        flag[x-1][y]=0;
    }
    if(map1[x][y+1]=='.'&&flag[x][y+1]==0)
    {
        flag[x][y+1]=1;
        DFS(cnt,x,y+1);
        flag[x][y+1]=0;
    }
    if(map1[x][y-1]=='.'&&flag[x][y-1]==0)
    {
        flag[x][y-1]=1;
        DFS(cnt,x,y-1);
        flag[x][y-1]=0;
    }
}
int main()
{

    cin>>N;
    for(I=0;I<N;I++)
    {
         memset(map1,'*',sizeof(map1));
   memset(flag,0,sizeof(flag));
        cin>>m>>n;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>map1[i][j];
            }
        }
        cin>>k>>x1>>y1>>x2>>y2;
        DFS(cnt,x1,y1);
    }
}
