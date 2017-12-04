#include<cstdio>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
const int maxn=100+5;
int dr[]={-1,1,0,0};//上下左右
int dc[]={0,0,-1,1};
struct Node
{
    int r,c;
    int dir;
    int num;
    Node(int r,int c,int dir,int num):r(r),c(c),dir(dir),num(num){}
};
bool vis[maxn][maxn][4];
int dist[maxn][maxn][4];//到达当前状态需要最少转弯几次
int R,C,K;
int r1,c1,r2,c2;
char map[maxn][maxn];
bool BFS()
{
    queue<Node> Q;
    memset(vis,0,sizeof(vis));
    for(int d=0;d<4;d++)
    {
        int nr=r1+dr[d] , nc=c1+dc[d];
        if(nr>=1&&nr<=R&&nc>=1&&nc<=C&&map[nr][nc]=='.')
        {
            if(nr==r2&&nc==c2) return true;
            Q.push(Node(nr,nc,d,0));
            vis[nr][nc][d]=true;
        }
    }
    while(!Q.empty())
    {
        Node node=Q.front();Q.pop();
        int r=node.r,c=node.c,dir=node.dir,num=node.num;
        for(int d=0;d<4;d++)
        {
            int nr=r+dr[d],nc=c+dc[d];
            if(nr>=1&&nr<=R&&nc>=1&&nc<=C&&map[nr][nc]=='.')
            {
                int n_num= d==dir?num:num+1;
                if(n_num>K) continue; //转弯已经超过限制
                if(vis[nr][nc][d] && n_num>=dist[nr][nc][d]) continue; //到达当前状态转弯过多
                vis[nr][nc][d]=true;
                dist[nr][nc][d]=n_num;
                Q.push(Node(nr,nc,d,n_num));
                if(nr==r2&&nc==c2) return true;
            }
        }
    }
    return false;
}
int main()
{
    int T;scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&R,&C);
        for(int i=1;i<=R;i++)
        {
            for(int j=1;j<=C;j++)
                scanf(" %c",&map[i][j]);             //注意,%c之前的空格,去除回车符
        }
        scanf("%d%d%d%d%d",&K,&c1,&r1,&c2,&r2);      //错误,r与c写反了,看题意
        if(BFS())printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
