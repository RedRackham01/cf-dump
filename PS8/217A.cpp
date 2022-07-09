#include<bits/stdc++.h>
using namespace std;
int n;
int drift[100][2];
bool vis[100];
void dfs(int k)
{
    vis[k]=true;
    for(int i=0;i<n;i++)
    {
        if((drift[i][0]==drift[k][0] || drift[i][1]==drift[k][1]) && !vis[i])
            dfs(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int c=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>drift[i][0]>>drift[i][1];
    for(int i=0;i<n;i++)
        if(!vis[i])
        {
            dfs(i);
            c++;
        }
    cout<<c-1;
    return 0;
}