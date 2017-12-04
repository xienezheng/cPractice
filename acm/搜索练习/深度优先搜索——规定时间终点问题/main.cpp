#include <iostream>
#include<string.h>
using namespace std;
char map1[10][10];
   int flag[10][10];
   int startx,starty,endx,endy;
   int m,n,t;
   int i,j,k;

void DFS(int x,int y,int cnt)
{if(cnt>t)
{

k=0;
    return;
}
if(cnt<=t&&x==endx&&y==endy)
{k=1;

    return;
}
    if(map1[x+1][y]=='.'&&flag[x+1][y]==0)
    {
        flag[x+1][y]==1;
        DFS(x+1,y,cnt+1);
        flag[x+1][y]==0;
    }
    if(map1[x-1][y]=='.'&&flag[x-1][y]==0)
    {
        flag[x-1][y]==1;
        DFS(x-1,y,cnt+1);
        flag[x-1][y]==0;
    }
    if(map1[x][y+1]=='.'&&flag[x][y+1]==0)
    {
        flag[x][y+1]==1;
        DFS(x,y+1,cnt+1);
        flag[x][y+1]==0;
    }
    if(map1[x][y-1]=='.'&&flag[x][y-1]==0)
    {
        flag[x][y-1]==1;
        DFS(x,y-1,cnt+1);
        flag[x][y-1]==0;
    }
    return;
}
int main()
{

   cin>>m>>n>>t;
memset(map1,'X',sizeof(map1));
   memset(flag,0,sizeof(flag));
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>map1[i][j];
           if(map1[i][j]=='S')
           {
               startx=j;
               starty=i;
               flag[i][j]=1;
           }

           if(map1[i][j]=='D')
           {
               endx=j;
               endx=i;
                flag[i][j]=1;
           }
       }
   }
   DFS(startx,starty,0);
if(k==1)
{
    cout<<"yes";
}
if(k==0)
{
    cout<<"no";
}
}
