#include<bits/stdc++.h>
#define ll long long
using namespace std;
void testcase()
{
    ll n,ans;
    cin>>n;
    map<ll,ll> m;
    for(int i=0;i<n;i++)
    {
        cin>>ans;
        m[(ll)log2(ans)]++;
    }
    ans=0;
    for(auto i :m)
        ans+=i.second*(i.second-1)/2;
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
        testcase();
}