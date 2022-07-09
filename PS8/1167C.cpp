#include<bits/stdc++.h>
using namespace std;
bool vis[(unsigned long long)1e6];
vector<int> arr[2*(unsigned long long)1e6+2];
int n,m,c;
void reset()
{
    for(int i=1;i<=n+m;i++)
        vis[i]=false;
}
void dfs(int x)
{
    vis[x]=true;
    if(x<8)c++;
    for (auto i : arr[x])
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        int p;        
        for (int j=0;j<x;j++)
        {
            cin>>p;
            arr[p].push_back(n+i);
            arr[n+i].push_back(p);
        }
    }
    for (int i=1;i<=n;i++)
    {
        reset(); c=0;
        dfs(i);
        cout<<c<<" ";
    }
}