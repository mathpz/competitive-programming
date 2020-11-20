#include <bits/stdc++.h>
using namespace std;

#define MAX 1123

int n, m;           
char grid[MAX][MAX];    
int vis[MAX][MAX];      

int dir[4][2] = { {-1,0}, {1, 0}, {0,-1}, {0, 1} };

void dfs(int i, int j) 
{
  int k, i2, j2;
  if (vis[i][j]) return;
  vis[i][j] = 1;
  for (k = 0; k < 4; k++) 
  {
    i2 = i + dir[k][0]; j2 = j + dir[k][1];
    if (0 <= i2 && i2 < n && 0 <= j2 && j2 < m && grid[i2][j2] == 1)
      dfs(i2, j2);
  }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d", &grid[i][j]);
    memset(vis, 0, sizeof(int));

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == 1 && vis[i][j] == 0)
            {    
                ans++;
                dfs(i, j);     //dispara a dfs para preencher visitados
            }
        }
    printf("%d\n", ans);

    return 0;
}