#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,a,b,c,ans=0;
    cin>>n>>a>>b>>c;
    for(int i=0;i*a<=n;++i)
        for(int j=0;i*a+j*b<=n;++j)
        {
            int r=n-i*a-j*b;
            if(r%c==0)
            {
                ans=max(ans,i+j+r/c);
            }
        }
    cout<<ans;
}