#include<bits/stdc++.h>
#define ll long long
using namespace std;
int check(ll n,ll a[],ll b[],ll k, ll m)
{
    ll x;
    for(int i=0;i<n;i++)
    {
        if(k<0)
            return 0;
        x=b[i]-(a[i]*m);
        if(x<0)
            k+=x;
    }
    if(k<0) return 0;
    return 1;
}
int main()
{
    int i;
    ll n,k,l=0,r=10e9,mid,ans;
    cin>>n>>k;
    ll a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(n,a,b,k,mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
            r=mid-1;
    }
    cout<<ans;
}    