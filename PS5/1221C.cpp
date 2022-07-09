#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int c,m,x;
        cin>>c>>m>>x;
        int ans=min({c,m,(c+m+x)/3});
        cout<<ans<<endl;
    }
}