#include<bits/stdc++.h>
using namespace std;
void testcase()
{
    int n,l,r,x;
    cin>>n>>l>>r;
    map<int,int> ll,rr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(i<l)  ll[x]++;
        else
        {
            if(ll[x])
            {
                ll[x]--;
                l--;
                r--;
            }
            else rr[x]++;
        }
    }
    if(l<r)
    {
        swap(ll,rr);
        swap(l, r);
    }
    int ans=0;
    x=l-r;
    for(auto i : ll)
    {
        while(ll[i.first]>1 && x>0)
        {
            ans++;
            x-=2;
            ll[i.first]-=2;
        }
    }
    for(auto i : ll)
        if(i.second>0) ans+=i.second;
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--) testcase();
}