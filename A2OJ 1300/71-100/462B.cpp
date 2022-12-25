#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n,k;
    ll ans=0; 
    string s;
    cin>>n>>k>>s;
    ll f[27]={0};
    for(int i=0;i<n;i++)
        f[s[i]-'A']++;
    sort(f,f+27,greater<int>());
    for(int i=0;i<26;i++)
    {
        if(f[i]<=k)
            ans+=f[i]*f[i];
        else
        {
            ans+=k*k;
            break;
        }
        k-=f[i];
    }
    cout<<ans;
} 