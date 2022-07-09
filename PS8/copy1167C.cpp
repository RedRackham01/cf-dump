#include<bits/stdc++.h>
using namespace std;
int c=0;
void dfs(int k, bool vis[],vector<int> adj[],int val[])
{
    vis[k]=true;
    c++;
    for(auto i : adj[k])
    {
        if(!vis[i])
            dfs(i,vis,adj,val);
    }
    val[k]=c;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    bool vis[n+1]={false};
    int val[n+1];
    for(int i=0;i<m;i++)
    {
        int k; cin>>k;
        int t=-1;
        for(int j=0;j<k;j++)
        {
            int temp; 
            cin>>temp;
            if(t!=-1)
            {
                adj[t].push_back(temp);
                adj[temp].push_back(t);
            }
            t=temp;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            c=0;
            dfs(i,vis,adj,val);
        }
        cout<<val[i]<<' ';  
    }
}