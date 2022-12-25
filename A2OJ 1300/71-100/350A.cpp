#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int c[n],w[m];
    for(int i=0;i<n;i++) cin>>c[i];
    for(int i=0;i<m;i++) cin>>w[i];
    sort(c,c+n);
    sort(w,w+m);
    int t= max(2*c[0],c[n-1]);
    if(t>=w[0]) cout<<-1;
    else
    {
        cout<<t;
    }
}