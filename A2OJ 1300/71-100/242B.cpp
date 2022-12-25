#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    pair<int,int> p[n];
    int a=INT_MAX,b=0,q,w;
    for(int i=0;i<n;i++)
    {
        cin>>q>>w;
        p[i]={q,w};
        a=min(a,q);
        b=max(b,w);
    }
    for(int i=0;i<n;i++)
    {
        if(p[i].first==a && p[i].second==b)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}