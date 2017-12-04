#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char map[100][100];
int cnt=0;
int m,n;
int i,j;
int a[16]={0,1,1,1,1,0,1,-1,0,-1,-1,-1,-1,0,-1,1};
void DFS(int starx,int stary)
{
    map[starx][stary]='*';
    for(i=0;i<=15;i=i+2)
    {
        if(map[starx+a[i]][stary+a[i+1]]=='@'&&starx+a[i]>=0&&starx+a[i]<m&&stary+a[i+1]>=0&&stary+a[i+1]<n)
        {
            DFS(starx+a[i],stary+a[i+1]);
        }
    }

}
int main()
{
    int i,j,starx,stary;
    while(scanf("%d%d",&m,&n)&&m!=0&&n!=0)
    {cnt=0;
    memset(map,0,sizeof(map));
    for(i=0;i<m;i++)
    {


            scanf("%s",map[i]);

    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

            if(map[i][j]=='@')
            {cnt++;
                DFS(i,j);
            }
        }
    }

 printf("%d\n",cnt);
   }
   return 0;
}
