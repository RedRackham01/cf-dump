#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll x,y,n,mod=1000000007;
    cin>>x>>y>>n;
    ll ans[6]={x,y,y-x,-x,-y,x-y};
    cout<<(((ans[(n-1)%6]%mod)+mod)%mod);
} 