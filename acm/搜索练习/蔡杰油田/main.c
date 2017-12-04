#include<string.h>
#include<stdio.h>

int cnt, m, n;
char map[200][200];
int ck[16] = {-1,-1, -1,0, -1,1, 0,-1, 0,1, 1,-1, 1,0, 1,1};

void mark (int x, int y)
{
   map[x][y] = '*';
    for (int i = 0; i < 17; i += 2)
        if (x + ck[i] >= 0 && x + ck[i] <= m & y + ck[i+1] >= 0 && y + ck[i+1] <= n && map[x + ck[i]][y + ck[i+1]] == '@')
            mark(x + ck[i], y + ck[i+1]);
    return;
}

int main()
{
    while (scanf("%d%d", &m, &n) && m != 0)
	{        memset (map, 0, sizeof (map));
      for (int i = 0; i < m; i++)
           scanf("%s", map[i]);
       cnt = 0;
       for ( i = 0; i < m; i++)
           for (int j = 0; j < n; j++)
              if(map[i][j] == '@')
                {
                    cnt++;
                   mark(i, j);
                }
        printf("%d\n", cnt);
    }
    return 0;
}
