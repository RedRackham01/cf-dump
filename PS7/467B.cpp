#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    int p[m+1];
    for(int i=0;i<=m;i++)
        cin>>p[i];
    int ans=0;
    for(int i=0;i<m;i++)
    {
        bitset<32> bs(p[m]^p[i]);
        if(bs.count()<=k)
            ans++;
    }
    cout<<ans;
}