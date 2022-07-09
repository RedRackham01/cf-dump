#include<bits/stdc++.h>
using namespace std;
char p[10][10][10];
bool vis[10][10][10]={false};
int dx[]= {1, 0, 0, -1, 0, 0};
int dy[]= {0, 1, 0, 0, -1, 0};
int dz[]= {0, 0, 1, 0, 0, -1};
int k,n,m,c =0;
void dfs(int x, int y , int z)
{
    if( x<0 || y<0 || z<0 || x>=k || y>=n || z>=m || vis[x][y][z] || p[x][y][z] == '#')
        return;
    vis[x][y][z]=true;
    c++;
    for(int i=0;i<6;i++)
        dfs(x+dx[i],y+dy[i],z+dz[i]);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>k>>n>>m;
    for (int i = 0; i < k; i++)
    {    for (int j = 0; j <n; j++)
            for (int z = 0; z < m; z++)
                cin >> p[i][j][z];
        
    }
    int x,y;
    cin>>x>>y;
    dfs(0,x-1,y-1);
    cout<<c;
}