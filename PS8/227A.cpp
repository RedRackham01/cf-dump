#include<bits/stdc++.h>
using namespace std;
void dfs(int k, bool vis[],vector<int> adj[])
{
    vis[k]=true;
    for(auto i : adj[k])
    {
        if(!vis[i])
            dfs(i,vis,adj);
    }
}
int numofgraph(int n,int m,vector<int> adj[])
{
    bool vis[n+m+2];
    for(int i =1;i<=n;i++)
        vis[i]=false;
    int c=0;
    for (int i = 1; i <=n; i++) 
        if (!vis[i]) 
        {
            dfs(i, vis,adj);
            c++;
        }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,c=0;
    cin>>n>>m;
    vector<int> adj[n+m+2];
    for(int i=1;i<=n;i++)
    {
        int k; cin>>k;
        if(k==0) c++;
        for(int j=0;j<k;j++)
        {
            int temp; cin>>temp;
            adj[i].push_back(temp+n);
            adj[temp+n].push_back(i);
        }

    }
    if(c==n) cout<<c;
    else
    cout<<(numofgraph(n,m,adj)-1);
}