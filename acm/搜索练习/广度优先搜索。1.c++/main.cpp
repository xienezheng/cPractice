#include<iostream>
#include<cmath>
#include<string.h>
#include<stdio.h>
using namespace std;
char gamap[30][30];
int gasgn[30][30];
void DFS(int x,int y)
int sum;
{
    if((gamap[x-1][y])=='.'&&(gasgn[x-1][y]==0))
    {
        sum++;
        gasgn[x-1][y]=1;
        DFS(x-1,y);

    }
    if((gamap[x+1][y]=='.')&&(gasgn[x+1][y]==0))
    {
        sum++;
        gasgn[x+1][y]=1;
        DFS(x+1,y);

    }
    if((gamap[x][y+1]=='.')&&(gasgn[x][y+1]==0))
    {
        sum++;
        gasgn[x][y+1]=1;
        DFS(x,y+1);

    }
    if((gamap[x][y-1]=='.')&&(gasgn[x][y-1]==0))
    {
        sum++;
        gasgn[x][y-1]=1;
        DFS(x,y-1);

    }
}
int main()
{
    int w,h,firx,firy,i,j;
    while(scanf("%d%d",&w,&h)&&w!=0&&h!=0)
    {sum=1;
      memset(gamap,'#',sizeof(gamap));
    memset(gasgn,0,sizeof(gasgn));
        for(i=1;i<=h;i++)
        {
            for(j=1;j<=w;j++)
            {
                cin>>gamap[i][j];
                if(gamap[i][j]=='@')
                {
                    firx=i;
                    firy=j;
                    gasgn[i][j]==1;
                }
            }
        }
        DFS(firx,firy);
        printf("%d\n",sum);
    }
    return 0;
}



