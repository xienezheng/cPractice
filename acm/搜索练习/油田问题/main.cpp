#include <iostream>

using namespace std;
int cnt;
char map[50][50];
int di[16]={-1,-1,-1,0,-1,1,0,-1,0,1,1,-1,1,0,1,1};

int main()
{
    while(scanf("%d%d",&m,&n)&&m!=0)
    {
        memset(map,0,sizeof(map));
        for(int i(0);i=m;i++)
        {
            scanf("%s",map[i]);
        }
        cnt=0;
        for(i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(map[i][j]=="@")
                {
                    cnt++;
                    mark(i,j);
                }
                printf("%d\n",cnt);
            }
        }
        return 0;
    }
